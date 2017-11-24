// DO NOT EDIT: code is autogenerated by ./go2nodebinding from Go code.
// https://github.com/divan/go2nodebinding

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


void _GenerateConfig(const FunctionCallbackInfo<Value>& args) {
	Isolate* isolate = args.GetIsolate();

	if (args.Length() != 3) {
		// Throw an Error that is passed back to JavaScript
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong number of arguments for GenerateConfig")));
		return;
	}

	// Check the argument types
	
	if (!args[0]->IsString()) { 
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong argument type for 'datadir'")));
		return;
	}
	if (!args[1]->IsNumber()) { 
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong argument type for 'networkID'")));
		return;
	}
	if (!args[2]->IsNumber()) { 
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong argument type for 'devMode'")));
		return;
	}

	
	String::Utf8Value arg0Obj(args[0]->ToString());
	char *arg0 = *arg0Obj;
	int arg1 = args[1]->Int32Value();
	int arg2 = args[2]->Int32Value();

	// Call exported Go function, which returns a C string
	char *c = GenerateConfig(arg0, arg1, arg2);

	Local<String> ret = String::NewFromUtf8(isolate, c);
	args.GetReturnValue().Set(ret);
	delete c;
}

void _StartNode(const FunctionCallbackInfo<Value>& args) {
	Isolate* isolate = args.GetIsolate();

	if (args.Length() != 1) {
		// Throw an Error that is passed back to JavaScript
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong number of arguments for StartNode")));
		return;
	}

	// Check the argument types
	
	if (!args[0]->IsString()) { 
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong argument type for 'configJSON'")));
		return;
	}

	
	String::Utf8Value arg0Obj(args[0]->ToString());
	char *arg0 = *arg0Obj;

	// Call exported Go function, which returns a C string
	char *c = StartNode(arg0);

	Local<String> ret = String::NewFromUtf8(isolate, c);
	args.GetReturnValue().Set(ret);
	delete c;
}

void _StopNode(const FunctionCallbackInfo<Value>& args) {
	Isolate* isolate = args.GetIsolate();

	if (args.Length() != 0) {
		// Throw an Error that is passed back to JavaScript
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong number of arguments for StopNode")));
		return;
	}

	// Check the argument types
	

	

	// Call exported Go function, which returns a C string
	char *c = StopNode();

	Local<String> ret = String::NewFromUtf8(isolate, c);
	args.GetReturnValue().Set(ret);
	delete c;
}

void _ValidateNodeConfig(const FunctionCallbackInfo<Value>& args) {
	Isolate* isolate = args.GetIsolate();

	if (args.Length() != 1) {
		// Throw an Error that is passed back to JavaScript
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong number of arguments for ValidateNodeConfig")));
		return;
	}

	// Check the argument types
	
	if (!args[0]->IsString()) { 
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong argument type for 'configJSON'")));
		return;
	}

	
	String::Utf8Value arg0Obj(args[0]->ToString());
	char *arg0 = *arg0Obj;

	// Call exported Go function, which returns a C string
	char *c = ValidateNodeConfig(arg0);

	Local<String> ret = String::NewFromUtf8(isolate, c);
	args.GetReturnValue().Set(ret);
	delete c;
}

void _ResetChainData(const FunctionCallbackInfo<Value>& args) {
	Isolate* isolate = args.GetIsolate();

	if (args.Length() != 0) {
		// Throw an Error that is passed back to JavaScript
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong number of arguments for ResetChainData")));
		return;
	}

	// Check the argument types
	

	

	// Call exported Go function, which returns a C string
	char *c = ResetChainData();

	Local<String> ret = String::NewFromUtf8(isolate, c);
	args.GetReturnValue().Set(ret);
	delete c;
}

void _CallRPC(const FunctionCallbackInfo<Value>& args) {
	Isolate* isolate = args.GetIsolate();

	if (args.Length() != 1) {
		// Throw an Error that is passed back to JavaScript
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong number of arguments for CallRPC")));
		return;
	}

	// Check the argument types
	
	if (!args[0]->IsString()) { 
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong argument type for 'inputJSON'")));
		return;
	}

	
	String::Utf8Value arg0Obj(args[0]->ToString());
	char *arg0 = *arg0Obj;

	// Call exported Go function, which returns a C string
	char *c = CallRPC(arg0);

	Local<String> ret = String::NewFromUtf8(isolate, c);
	args.GetReturnValue().Set(ret);
	delete c;
}

void _CreateAccount(const FunctionCallbackInfo<Value>& args) {
	Isolate* isolate = args.GetIsolate();

	if (args.Length() != 1) {
		// Throw an Error that is passed back to JavaScript
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong number of arguments for CreateAccount")));
		return;
	}

	// Check the argument types
	
	if (!args[0]->IsString()) { 
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong argument type for 'password'")));
		return;
	}

	
	String::Utf8Value arg0Obj(args[0]->ToString());
	char *arg0 = *arg0Obj;

	// Call exported Go function, which returns a C string
	char *c = CreateAccount(arg0);

	Local<String> ret = String::NewFromUtf8(isolate, c);
	args.GetReturnValue().Set(ret);
	delete c;
}

void _CreateChildAccount(const FunctionCallbackInfo<Value>& args) {
	Isolate* isolate = args.GetIsolate();

	if (args.Length() != 2) {
		// Throw an Error that is passed back to JavaScript
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong number of arguments for CreateChildAccount")));
		return;
	}

	// Check the argument types
	
	if (!args[0]->IsString()) { 
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong argument type for 'parentAddress'")));
		return;
	}
	if (!args[1]->IsString()) { 
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong argument type for 'password'")));
		return;
	}

	
	String::Utf8Value arg0Obj(args[0]->ToString());
	char *arg0 = *arg0Obj;
	String::Utf8Value arg1Obj(args[1]->ToString());
	char *arg1 = *arg1Obj;

	// Call exported Go function, which returns a C string
	char *c = CreateChildAccount(arg0, arg1);

	Local<String> ret = String::NewFromUtf8(isolate, c);
	args.GetReturnValue().Set(ret);
	delete c;
}

void _RecoverAccount(const FunctionCallbackInfo<Value>& args) {
	Isolate* isolate = args.GetIsolate();

	if (args.Length() != 2) {
		// Throw an Error that is passed back to JavaScript
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong number of arguments for RecoverAccount")));
		return;
	}

	// Check the argument types
	
	if (!args[0]->IsString()) { 
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong argument type for 'password'")));
		return;
	}
	if (!args[1]->IsString()) { 
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong argument type for 'mnemonic'")));
		return;
	}

	
	String::Utf8Value arg0Obj(args[0]->ToString());
	char *arg0 = *arg0Obj;
	String::Utf8Value arg1Obj(args[1]->ToString());
	char *arg1 = *arg1Obj;

	// Call exported Go function, which returns a C string
	char *c = RecoverAccount(arg0, arg1);

	Local<String> ret = String::NewFromUtf8(isolate, c);
	args.GetReturnValue().Set(ret);
	delete c;
}

void _VerifyAccountPassword(const FunctionCallbackInfo<Value>& args) {
	Isolate* isolate = args.GetIsolate();

	if (args.Length() != 3) {
		// Throw an Error that is passed back to JavaScript
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong number of arguments for VerifyAccountPassword")));
		return;
	}

	// Check the argument types
	
	if (!args[0]->IsString()) { 
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong argument type for 'keyStoreDir'")));
		return;
	}
	if (!args[1]->IsString()) { 
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong argument type for 'address'")));
		return;
	}
	if (!args[2]->IsString()) { 
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong argument type for 'password'")));
		return;
	}

	
	String::Utf8Value arg0Obj(args[0]->ToString());
	char *arg0 = *arg0Obj;
	String::Utf8Value arg1Obj(args[1]->ToString());
	char *arg1 = *arg1Obj;
	String::Utf8Value arg2Obj(args[2]->ToString());
	char *arg2 = *arg2Obj;

	// Call exported Go function, which returns a C string
	char *c = VerifyAccountPassword(arg0, arg1, arg2);

	Local<String> ret = String::NewFromUtf8(isolate, c);
	args.GetReturnValue().Set(ret);
	delete c;
}

void _Login(const FunctionCallbackInfo<Value>& args) {
	Isolate* isolate = args.GetIsolate();

	if (args.Length() != 2) {
		// Throw an Error that is passed back to JavaScript
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong number of arguments for Login")));
		return;
	}

	// Check the argument types
	
	if (!args[0]->IsString()) { 
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong argument type for 'address'")));
		return;
	}
	if (!args[1]->IsString()) { 
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong argument type for 'password'")));
		return;
	}

	
	String::Utf8Value arg0Obj(args[0]->ToString());
	char *arg0 = *arg0Obj;
	String::Utf8Value arg1Obj(args[1]->ToString());
	char *arg1 = *arg1Obj;

	// Call exported Go function, which returns a C string
	char *c = Login(arg0, arg1);

	Local<String> ret = String::NewFromUtf8(isolate, c);
	args.GetReturnValue().Set(ret);
	delete c;
}

void _Logout(const FunctionCallbackInfo<Value>& args) {
	Isolate* isolate = args.GetIsolate();

	if (args.Length() != 0) {
		// Throw an Error that is passed back to JavaScript
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong number of arguments for Logout")));
		return;
	}

	// Check the argument types
	

	

	// Call exported Go function, which returns a C string
	char *c = Logout();

	Local<String> ret = String::NewFromUtf8(isolate, c);
	args.GetReturnValue().Set(ret);
	delete c;
}

void _CompleteTransaction(const FunctionCallbackInfo<Value>& args) {
	Isolate* isolate = args.GetIsolate();

	if (args.Length() != 2) {
		// Throw an Error that is passed back to JavaScript
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong number of arguments for CompleteTransaction")));
		return;
	}

	// Check the argument types
	
	if (!args[0]->IsString()) { 
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong argument type for 'id'")));
		return;
	}
	if (!args[1]->IsString()) { 
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong argument type for 'password'")));
		return;
	}

	
	String::Utf8Value arg0Obj(args[0]->ToString());
	char *arg0 = *arg0Obj;
	String::Utf8Value arg1Obj(args[1]->ToString());
	char *arg1 = *arg1Obj;

	// Call exported Go function, which returns a C string
	char *c = CompleteTransaction(arg0, arg1);

	Local<String> ret = String::NewFromUtf8(isolate, c);
	args.GetReturnValue().Set(ret);
	delete c;
}

void _CompleteTransactions(const FunctionCallbackInfo<Value>& args) {
	Isolate* isolate = args.GetIsolate();

	if (args.Length() != 2) {
		// Throw an Error that is passed back to JavaScript
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong number of arguments for CompleteTransactions")));
		return;
	}

	// Check the argument types
	
	if (!args[0]->IsString()) { 
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong argument type for 'ids'")));
		return;
	}
	if (!args[1]->IsString()) { 
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong argument type for 'password'")));
		return;
	}

	
	String::Utf8Value arg0Obj(args[0]->ToString());
	char *arg0 = *arg0Obj;
	String::Utf8Value arg1Obj(args[1]->ToString());
	char *arg1 = *arg1Obj;

	// Call exported Go function, which returns a C string
	char *c = CompleteTransactions(arg0, arg1);

	Local<String> ret = String::NewFromUtf8(isolate, c);
	args.GetReturnValue().Set(ret);
	delete c;
}

void _DiscardTransaction(const FunctionCallbackInfo<Value>& args) {
	Isolate* isolate = args.GetIsolate();

	if (args.Length() != 1) {
		// Throw an Error that is passed back to JavaScript
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong number of arguments for DiscardTransaction")));
		return;
	}

	// Check the argument types
	
	if (!args[0]->IsString()) { 
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong argument type for 'id'")));
		return;
	}

	
	String::Utf8Value arg0Obj(args[0]->ToString());
	char *arg0 = *arg0Obj;

	// Call exported Go function, which returns a C string
	char *c = DiscardTransaction(arg0);

	Local<String> ret = String::NewFromUtf8(isolate, c);
	args.GetReturnValue().Set(ret);
	delete c;
}

void _DiscardTransactions(const FunctionCallbackInfo<Value>& args) {
	Isolate* isolate = args.GetIsolate();

	if (args.Length() != 1) {
		// Throw an Error that is passed back to JavaScript
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong number of arguments for DiscardTransactions")));
		return;
	}

	// Check the argument types
	
	if (!args[0]->IsString()) { 
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong argument type for 'ids'")));
		return;
	}

	
	String::Utf8Value arg0Obj(args[0]->ToString());
	char *arg0 = *arg0Obj;

	// Call exported Go function, which returns a C string
	char *c = DiscardTransactions(arg0);

	Local<String> ret = String::NewFromUtf8(isolate, c);
	args.GetReturnValue().Set(ret);
	delete c;
}

void _InitJail(const FunctionCallbackInfo<Value>& args) {
	Isolate* isolate = args.GetIsolate();

	if (args.Length() != 1) {
		// Throw an Error that is passed back to JavaScript
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong number of arguments for InitJail")));
		return;
	}

	// Check the argument types
	
	if (!args[0]->IsString()) { 
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong argument type for 'js'")));
		return;
	}

	
	String::Utf8Value arg0Obj(args[0]->ToString());
	char *arg0 = *arg0Obj;

	// Call exported Go function, which returns a C string
	InitJail(arg0);

	
}

void _Parse(const FunctionCallbackInfo<Value>& args) {
	Isolate* isolate = args.GetIsolate();

	if (args.Length() != 2) {
		// Throw an Error that is passed back to JavaScript
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong number of arguments for Parse")));
		return;
	}

	// Check the argument types
	
	if (!args[0]->IsString()) { 
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong argument type for 'chatID'")));
		return;
	}
	if (!args[1]->IsString()) { 
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong argument type for 'js'")));
		return;
	}

	
	String::Utf8Value arg0Obj(args[0]->ToString());
	char *arg0 = *arg0Obj;
	String::Utf8Value arg1Obj(args[1]->ToString());
	char *arg1 = *arg1Obj;

	// Call exported Go function, which returns a C string
	char *c = Parse(arg0, arg1);

	Local<String> ret = String::NewFromUtf8(isolate, c);
	args.GetReturnValue().Set(ret);
	delete c;
}

void _CreateAndInitCell(const FunctionCallbackInfo<Value>& args) {
	Isolate* isolate = args.GetIsolate();

	if (args.Length() != 2) {
		// Throw an Error that is passed back to JavaScript
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong number of arguments for CreateAndInitCell")));
		return;
	}

	// Check the argument types
	
	if (!args[0]->IsString()) { 
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong argument type for 'chatID'")));
		return;
	}
	if (!args[1]->IsString()) { 
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong argument type for 'js'")));
		return;
	}

	
	String::Utf8Value arg0Obj(args[0]->ToString());
	char *arg0 = *arg0Obj;
	String::Utf8Value arg1Obj(args[1]->ToString());
	char *arg1 = *arg1Obj;

	// Call exported Go function, which returns a C string
	char *c = CreateAndInitCell(arg0, arg1);

	Local<String> ret = String::NewFromUtf8(isolate, c);
	args.GetReturnValue().Set(ret);
	delete c;
}

void _ExecuteJS(const FunctionCallbackInfo<Value>& args) {
	Isolate* isolate = args.GetIsolate();

	if (args.Length() != 2) {
		// Throw an Error that is passed back to JavaScript
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong number of arguments for ExecuteJS")));
		return;
	}

	// Check the argument types
	
	if (!args[0]->IsString()) { 
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong argument type for 'chatID'")));
		return;
	}
	if (!args[1]->IsString()) { 
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong argument type for 'code'")));
		return;
	}

	
	String::Utf8Value arg0Obj(args[0]->ToString());
	char *arg0 = *arg0Obj;
	String::Utf8Value arg1Obj(args[1]->ToString());
	char *arg1 = *arg1Obj;

	// Call exported Go function, which returns a C string
	char *c = ExecuteJS(arg0, arg1);

	Local<String> ret = String::NewFromUtf8(isolate, c);
	args.GetReturnValue().Set(ret);
	delete c;
}

void _Call(const FunctionCallbackInfo<Value>& args) {
	Isolate* isolate = args.GetIsolate();

	if (args.Length() != 3) {
		// Throw an Error that is passed back to JavaScript
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong number of arguments for Call")));
		return;
	}

	// Check the argument types
	
	if (!args[0]->IsString()) { 
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong argument type for 'chatID'")));
		return;
	}
	if (!args[1]->IsString()) { 
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong argument type for 'path'")));
		return;
	}
	if (!args[2]->IsString()) { 
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong argument type for 'params'")));
		return;
	}

	
	String::Utf8Value arg0Obj(args[0]->ToString());
	char *arg0 = *arg0Obj;
	String::Utf8Value arg1Obj(args[1]->ToString());
	char *arg1 = *arg1Obj;
	String::Utf8Value arg2Obj(args[2]->ToString());
	char *arg2 = *arg2Obj;

	// Call exported Go function, which returns a C string
	char *c = Call(arg0, arg1, arg2);

	Local<String> ret = String::NewFromUtf8(isolate, c);
	args.GetReturnValue().Set(ret);
	delete c;
}

void _StartCPUProfile(const FunctionCallbackInfo<Value>& args) {
	Isolate* isolate = args.GetIsolate();

	if (args.Length() != 1) {
		// Throw an Error that is passed back to JavaScript
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong number of arguments for StartCPUProfile")));
		return;
	}

	// Check the argument types
	
	if (!args[0]->IsString()) { 
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong argument type for 'dataDir'")));
		return;
	}

	
	String::Utf8Value arg0Obj(args[0]->ToString());
	char *arg0 = *arg0Obj;

	// Call exported Go function, which returns a C string
	char *c = StartCPUProfile(arg0);

	Local<String> ret = String::NewFromUtf8(isolate, c);
	args.GetReturnValue().Set(ret);
	delete c;
}

void _StopCPUProfiling(const FunctionCallbackInfo<Value>& args) {
	Isolate* isolate = args.GetIsolate();

	if (args.Length() != 0) {
		// Throw an Error that is passed back to JavaScript
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong number of arguments for StopCPUProfiling")));
		return;
	}

	// Check the argument types
	

	

	// Call exported Go function, which returns a C string
	char *c = StopCPUProfiling();

	Local<String> ret = String::NewFromUtf8(isolate, c);
	args.GetReturnValue().Set(ret);
	delete c;
}

void _WriteHeapProfile(const FunctionCallbackInfo<Value>& args) {
	Isolate* isolate = args.GetIsolate();

	if (args.Length() != 1) {
		// Throw an Error that is passed back to JavaScript
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong number of arguments for WriteHeapProfile")));
		return;
	}

	// Check the argument types
	
	if (!args[0]->IsString()) { 
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong argument type for 'dataDir'")));
		return;
	}

	
	String::Utf8Value arg0Obj(args[0]->ToString());
	char *arg0 = *arg0Obj;

	// Call exported Go function, which returns a C string
	char *c = WriteHeapProfile(arg0);

	Local<String> ret = String::NewFromUtf8(isolate, c);
	args.GetReturnValue().Set(ret);
	delete c;
}

void _Notify(const FunctionCallbackInfo<Value>& args) {
	Isolate* isolate = args.GetIsolate();

	if (args.Length() != 1) {
		// Throw an Error that is passed back to JavaScript
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong number of arguments for Notify")));
		return;
	}

	// Check the argument types
	
	if (!args[0]->IsString()) { 
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong argument type for 'token'")));
		return;
	}

	
	String::Utf8Value arg0Obj(args[0]->ToString());
	char *arg0 = *arg0Obj;

	// Call exported Go function, which returns a C string
	char *c = Notify(arg0);

	Local<String> ret = String::NewFromUtf8(isolate, c);
	args.GetReturnValue().Set(ret);
	delete c;
}

void _NotifyUsers(const FunctionCallbackInfo<Value>& args) {
	Isolate* isolate = args.GetIsolate();

	if (args.Length() != 3) {
		// Throw an Error that is passed back to JavaScript
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong number of arguments for NotifyUsers")));
		return;
	}

	// Check the argument types
	
	if (!args[0]->IsString()) { 
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong argument type for 'message'")));
		return;
	}
	if (!args[1]->IsString()) { 
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong argument type for 'payloadJSON'")));
		return;
	}
	if (!args[2]->IsString()) { 
		isolate->ThrowException(Exception::TypeError(
			String::NewFromUtf8(isolate, "Wrong argument type for 'tokensArray'")));
		return;
	}

	
	String::Utf8Value arg0Obj(args[0]->ToString());
	char *arg0 = *arg0Obj;
	String::Utf8Value arg1Obj(args[1]->ToString());
	char *arg1 = *arg1Obj;
	String::Utf8Value arg2Obj(args[2]->ToString());
	char *arg2 = *arg2Obj;

	// Call exported Go function, which returns a C string
	char *c = NotifyUsers(arg0, arg1, arg2);

	Local<String> ret = String::NewFromUtf8(isolate, c);
	args.GetReturnValue().Set(ret);
	delete c;
}

void init(Local<Object> exports) {
	NODE_SET_METHOD(exports, "GenerateConfig", _GenerateConfig);
	NODE_SET_METHOD(exports, "StartNode", _StartNode);
	NODE_SET_METHOD(exports, "StopNode", _StopNode);
	NODE_SET_METHOD(exports, "ValidateNodeConfig", _ValidateNodeConfig);
	NODE_SET_METHOD(exports, "ResetChainData", _ResetChainData);
	NODE_SET_METHOD(exports, "CallRPC", _CallRPC);
	NODE_SET_METHOD(exports, "CreateAccount", _CreateAccount);
	NODE_SET_METHOD(exports, "CreateChildAccount", _CreateChildAccount);
	NODE_SET_METHOD(exports, "RecoverAccount", _RecoverAccount);
	NODE_SET_METHOD(exports, "VerifyAccountPassword", _VerifyAccountPassword);
	NODE_SET_METHOD(exports, "Login", _Login);
	NODE_SET_METHOD(exports, "Logout", _Logout);
	NODE_SET_METHOD(exports, "CompleteTransaction", _CompleteTransaction);
	NODE_SET_METHOD(exports, "CompleteTransactions", _CompleteTransactions);
	NODE_SET_METHOD(exports, "DiscardTransaction", _DiscardTransaction);
	NODE_SET_METHOD(exports, "DiscardTransactions", _DiscardTransactions);
	NODE_SET_METHOD(exports, "InitJail", _InitJail);
	NODE_SET_METHOD(exports, "Parse", _Parse);
	NODE_SET_METHOD(exports, "CreateAndInitCell", _CreateAndInitCell);
	NODE_SET_METHOD(exports, "ExecuteJS", _ExecuteJS);
	NODE_SET_METHOD(exports, "Call", _Call);
	NODE_SET_METHOD(exports, "StartCPUProfile", _StartCPUProfile);
	NODE_SET_METHOD(exports, "StopCPUProfiling", _StopCPUProfiling);
	NODE_SET_METHOD(exports, "WriteHeapProfile", _WriteHeapProfile);
	NODE_SET_METHOD(exports, "Notify", _Notify);
	NODE_SET_METHOD(exports, "NotifyUsers", _NotifyUsers);
	
}

NODE_MODULE(NODE_GYP_MODULE_NAME, init)

}  // namespace status

