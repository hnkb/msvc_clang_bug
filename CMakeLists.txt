
cmake_minimum_required (VERSION 3.16)

project (clang_bug)

add_executable (clang_bug  main.cpp)
target_compile_features (clang_bug PRIVATE cxx_std_17)
target_precompile_headers(clang_bug PRIVATE "pch.h")
