cmake_minimum_required(VERSION 3.6.3)
project(SimpleAlgorithm)

set(CMAKE_C_STANDARD 99)

set(src_sort_1 sort/easy_bucket_sort.c)
add_executable(easy_bucket_sort ${src_sort_1})
set(src_sort_2 sort/bubble_sort.c)
add_executable(bubble_sort ${src_sort_2})


set(src_msl_1 miscellany/array_size_length.c)
add_executable(array_size_length ${src_msl_1})