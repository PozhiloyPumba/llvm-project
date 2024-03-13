add_llvm_component_library(LLVMGWArchInfo
    GWArchTargetInfo.cpp

    LINK_COMPONENTS
    MC
    Support

    ADD_TO_COMPONENT
    GWArch
)