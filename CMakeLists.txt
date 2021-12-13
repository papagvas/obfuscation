cmake_minimum_required(VERSION 3.16 FATAL_ERROR)
project(obfuscation LANGUAGES CXX)

add_executable(obfyObf obf1.cpp)
add_executable(DIYObf obf2.cpp)
add_subdirectory(obfy)
target_compile_features(obfyObf PRIVATE cxx_std_20)
target_compile_features(DIYObf PRIVATE cxx_std_20)
#target_link_libraries(obfyObf)
