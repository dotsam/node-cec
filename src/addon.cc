#include <node.h>
#include <v8.h>
#include <uv.h>
#include "cec_wrap.h"
#include "adapter_wrap.h"

using namespace v8;

void init(Handle<Object> exports) {
  CECWrap::Init(exports);
  AdapterWrap::Init(exports);
}
NODE_MODULE(addon, init)
