cmake_minimum_required(VERSION 3.00...3.5)
project(DatabaseHandleWithFake)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(DatabaseHandleWithFake src/main.cpp)
target_include_directories(DatabaseHandleWithFake PUBLIC src/)

find_program(CLANG_TIDY_EXE NAMES "clang-tidy" REQUIRED)
set(CLANG_TIDY_COMMAND "${CLANG_TIDY_EXE}" "-checks=-*,concurrency-*,clang-analyzer-*,cppcoreguidelines-*,performance-*,portability-*,readability-*")
set_target_properties(DatabaseHandleWithFake PROPERTIES CXX_CLANG_TIDY "${CLANG_TIDY_COMMAND}")

list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)
include(ClangFormat)
target_clangformat_setup(DatabaseHandleWithFake)
