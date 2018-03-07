cmake_minimum_required(VERSION 3.6.3)
project(SimpleAlgorithm)

set(CMAKE_C_STANDARD 99)
set(MISCELLANY_DIR miscellany)

set(SORT_DIR "sort")
set(SORT_SRCS
    easy_bucket_sort.c
    bubble_sort.c
    quick_sort.c)

foreach (sort_src ${SORT_SRCS})
    string(REPLACE ".c" "" exec_name ${sort_src}) # I used a simple string replace, to cut off .c.
    add_executable(${exec_name} ${SORT_DIR}/${sort_src}) 
    #    target_link_libraries(${exec_name} YourLib) # Make sure YourLib is linked to each app
endforeach ()

set(MISCELLANY_DIR "miscellany")
set(MISCELLANY_SRCS
    array_size_length.c)

foreach (miscellany_src ${MISCELLANY_SRCS})
    string(REPLACE ".c" "" exec_name ${miscellany_src})
    add_executable(${exec_name} ${MISCELLANY_DIR}/${miscellany_src})
endforeach ()

