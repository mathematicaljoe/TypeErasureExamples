cmake_minimum_required(VERSION 3.00)
project(DatabaseHandleWithFake)

add_executable(DatabaseHandleWithFake main.cpp)

find_program(CLANG_TIDY_EXE NAMES "clang-tidy" REQUIRED)
set(CLANG_TIDY_COMMAND "${CLANG_TIDY_EXE}" "-checks=-*,concurrency-*,clang-analyzer-*,cppcoreguidelines-*,performance-*,portability-*,readability-*")
set_target_properties(DatabaseHandleWithFake PROPERTIES CXX_CLANG_TIDY "${CLANG_TIDY_COMMAND}")

