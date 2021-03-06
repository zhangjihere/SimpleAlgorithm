cmake_minimum_required(VERSION 3.6.3)
project(SimpleAlgorithm)

set(CMAKE_C_STANDARD 99)

set(SORT_DIR "sort")
add_library(sort_func SHARED ${SORT_DIR}/sort_func.c)
set(SORT_SRCS
    easy_bucket_sort.c
    bubble_sort.c
    quick_sort.c
    sort_dedupl.c)
foreach (sort_src ${SORT_SRCS})
    string(REPLACE ".c" "" exec_name ${sort_src}) # I used a simple string replace, to cut off .c.
    add_executable(${exec_name} ${SORT_DIR}/${sort_src})
    target_link_libraries(${exec_name} sort_func) # Make sure YourLib is linked to each app
endforeach ()

set(QUEUE_STACK_LIST_DIR "queue_stack_list")
set(QSL_SRCS
    stack_echo.c
    stack_match_brackets.c)
foreach (qsl_src ${QSL_SRCS})
    string(REPLACE ".c" "" exec_name ${qsl_src})
    add_executable(${exec_name} ${QUEUE_STACK_LIST_DIR}/${qsl_src})
endforeach ()

set(MISCELLANY_DIR "miscellany")
set(MISCELLANY_SRCS
    array_size_length.c)
foreach (miscellany_src ${MISCELLANY_SRCS})
    string(REPLACE ".c" "" exec_name ${miscellany_src})
    add_executable(${exec_name} ${MISCELLANY_DIR}/${miscellany_src})
endforeach ()


