add_library(talker plugin.cpp talker.cpp)
target_include_directories(talker PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>)
set_target_properties(talker PROPERTIES POSITION_INDEPENDENT_CODE ON)
