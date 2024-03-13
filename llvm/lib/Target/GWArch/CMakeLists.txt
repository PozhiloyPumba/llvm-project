add_llvm_component_group(GWArch)

add_llvm_target(GWArchCodeGen
  GWArchTargetMachine.cpp

  LINK_COMPONENTS
  CodeGen
  Core
  Support
  Target
  GWArchInfo

  ADD_TO_COMPONENT
  GWArch
)

add_subdirectory(MCTargetDesc)
add_subdirectory(TargetInfo)