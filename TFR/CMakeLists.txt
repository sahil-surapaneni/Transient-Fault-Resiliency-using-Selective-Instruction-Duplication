add_llvm_library(TFR MODULE
  TFR.cpp
  # Include any additional .cpp files in this directory with passes you want included
  PLUGIN_TOOL
  opt
)