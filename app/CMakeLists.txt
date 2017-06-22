cmake_minimum_required(VERSION 3.4.1)
set(libs_DIR src/main/jnilib/${ANDROID_ABI})
set(libs_include_DIR src/main/cpp)
include_directories(${lib_include_DIR})
link_directories(${libs_DIR})
add_library( native-lib
             SHARED
             src/main/cpp/native-lib.cpp )
target_link_libraries(native-lib
                      demo )
find_library(log-lib
              log )
target_link_libraries(native-lib demo
                      ${log-lib} )





