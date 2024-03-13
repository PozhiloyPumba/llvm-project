#include "TargetInfo/GWArchTargetInfo.h"
#include "llvm/MC/TargetRegistry.h"
using namespace llvm;

Target &llvm::getTheGWArchTarget() {
  static Target TheGWArchTarget;
  return TheGWArchTarget;
}

extern "C" LLVM_EXTERNAL_VISIBILITY void LLVMInitializeGWArchTargetInfo() {
  RegisterTarget<Triple::gwarch> X(getTheGWArchTarget(), "GWArch", "GWArch 64",
                                   "GWArch");
}