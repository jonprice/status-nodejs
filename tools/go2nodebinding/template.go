package main

import (
	"bytes"
	"os"
	"text/template"
)

var headerTemplate = template.Must(template.New("header").Parse(`// DO NOT EDIT: code is autogenerated by ` + os.Args[0] + ` from Go code.
// https://github.com/status-im/status-nodejs/tools/go2nodebinding

#include <node.h>

#include "../bin/libstatus.h"

namespace status {

using v8::Exception;
using v8::FunctionCallbackInfo;
using v8::Isolate;
using v8::Local;
using v8::Object;
using v8::String;
using v8::Number;
using v8::Value;

`))

var footerTemplate = template.Must(template.New("footer").Parse(`
void init(Local<Object> exports) {
	{{- range $index, $func := .}}
	NODE_SET_METHOD(exports, "{{.Name}}", _{{.Name}});
	{{- end}}
}

NODE_MODULE(status_nodejs_addon, init)
}  // namespace status
`))

// This is most important piece of code for this tool, it produces
// the NodeJS Addon C++ API output for the corresponding Go function.
// Due to the nature of JS ecosystem, this code might be outdated and
// incorrect by the time I finish writing this comment. So it's probably
// going to be updated quite often.
//
// Idea is that every wrapper basically needs to map args and returns value
// and validate them. Current code template is a result of hours of
// googling and wandering between outdated docs and pull requests.
//
// Official docs are (were) at: https://v8docs.nodesource.com/node-8.0/dc/d0a/classv8_1_1_value.html
var funcTemplate = template.Must(template.New("func").Parse(`
void _{{.Name}}(const FunctionCallbackInfo<Value>& args) {
	Isolate* isolate = args.GetIsolate();

	if (args.Length() != {{.ParamCount}}) {
		// Throw an Error that is passed back to JavaScript
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong number of arguments for {{.Name}}")));
		return;
	}

	// Check the argument types
	{{range $index, $arg := .Params}}
	{{- if eq .Type "*C.char" -}}if (!args[{{$index}}]->IsString()) { {{- end}}
	{{- if eq .Type "C.int" -}}if (!args[{{$index}}]->IsNumber()) { {{- end}}
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong argument type for '{{.Name}}'")));
		return;
	}
	{{end}}

	{{range $index, $arg := .Params}}
	{{- if eq .Type "*C.char" -}}
	String::Utf8Value arg{{$index}}Obj(args[{{$index}}]->ToString());
	char *arg{{$index}} = *arg{{$index}}Obj;
	{{- else if eq .Type "C.int" -}}
	int arg{{$index}} = args[{{$index}}]->Int32Value();
	{{- end}}
	{{end}}

	// Call exported Go function, which returns a C string
	{{if eq .ReturnsCount 1}}char *c = {{end}}{{.Name}}({{range $index, $arg := .Params}}{{if $index}}, {{end}}arg{{$index}}{{end}});

	{{if eq .ReturnsCount 1}}Local<String> ret = String::NewFromUtf8(isolate, c);
	args.GetReturnValue().Set(ret);
	delete c;{{end}}
}
`))

func GenerateOutput(funcs []*Func) (string, error) {
	var buf bytes.Buffer
	if err := headerTemplate.Execute(&buf, nil); err != nil {
		return "", err
	}

	for _, fn := range funcs {
		if err := funcTemplate.Execute(&buf, fn); err != nil {
			return "", err
		}
	}

	if err := footerTemplate.Execute(&buf, funcs); err != nil {
		return "", err
	}

	return buf.String(), nil
}
