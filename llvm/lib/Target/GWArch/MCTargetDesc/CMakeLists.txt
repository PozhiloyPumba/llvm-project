add_llvm_component_library(LLVMGWArchDesc
  GWArchMCTargetDesc.cpp

  LINK_COMPONENTS
  MC
  Support
  GWArchInfo

  ADD_TO_COMPONENT
  GWArch
)