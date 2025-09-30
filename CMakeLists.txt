cmake_minimum_required(VERSION 3.15)

project("Streams")

set (CMAKE_CXX_STANDARD 14)

add_executable(1_read_from_console 1_read_from_console.cpp)
add_executable(2_read_from_file 2_read_from_file.cpp)
add_executable(3_write_to_file 3_write_to_file.cpp)
add_executable(4_tsv_to_csv 4_tsv_to_csv.cpp)
add_executable(5_argc_and_argv 5_argc_and_argv.cpp)
add_executable(6_piping_sink 6_piping_sink.cpp)
add_executable(7_client 7_client.cpp)
add_executable(7_server 7_server.cpp)
add_executable(8_string_stream 8_string_stream.cpp)
add_executable(9_file_streams_in_functions 9_file_streams_in_functions.cpp)
add_executable(10_streams_as_arguments 10_streams_as_arguments.cpp)
