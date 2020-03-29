cmake_minimum_required(VERSION 3.15)
project(test_repo)

add_compile_options(-Wall -Wextra -Wpedantic)

add_executable(intro main.cpp)
target_compile_features(intro PRIVATE cxx_lambda_init_captures)
