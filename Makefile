1: clean
	g++ 1_read_from_console.cpp -o 1_read_from_console
	./1_read_from_console

2: clean
	g++ 2_read_from_file.cpp -o 2_read_from_file
	./2_read_from_file

3: clean
	g++ 3_write_to_file.cpp -o 3_write_to_file
	./3_write_to_file

4: clean
	g++ 4_tsv_to_csv.cpp -o 4_tsv_to_csv
	./4_tsv_to_csv

5: clean
	g++ 5_argc_and_argv.cpp -o 5_argc_and_argv

6: clean
	g++ 2_read_from_file.cpp -o 2_read_from_file
	g++ 6_piping_sink.cpp -o 6_piping_sink
	./2_read_from_file | ./6_piping_sink

7: clean
	g++ --std=c++23 7_server.cpp -o 7_server
	g++ --std=c++23 7_client.cpp -o 7_client

8: clean
	g++ 8_string_stream.cpp -o 8_string_stream
	./8_string_stream

9: clean
	g++ 9_file_streams_in_functions.cpp -o 9_file_streams_in_functions
	./9_file_streams_in_functions

10: clean
	g++ 10_streams_as_arguments.cpp -o 10_streams_as_arguments
	./10_streams_as_arguments

clean:
	@rm -f 1_read_from_console
	@rm -f 2_read_from_file
	@rm -f 3_write_to_file
	@rm -f 4_tsv_to_csv
	@rm -f 5_argc_and_argv
	@rm -f 6_piping_sink
	@rm -f 7_server
	@rm -f 7_client
	@rm -f 8_string_stream
	@rm -f 9_file_streams_in_functions
	@rm -f 10_streams_as_arguments
	@rm -f data/converted_video_games.csv
	@rm -f data/grocery_list.txt
