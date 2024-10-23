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

clean:
	@rm -rf 1_read_from_console
	@rm -rf 2_read_from_file
	@rm -rf 3_write_to_file
	@rm -rf 4_tsv_to_csv
	@rm -rf 5_argc_and_argv
	@rm -rf 6_piping_sink
	@rm -rf 7_server
	@rm -rf 7_client
	@rm -rf 8_string_stream
