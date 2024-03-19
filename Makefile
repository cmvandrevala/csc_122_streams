1: clean
	g++ 1_read_from_console.cpp -o 1_read_from_console

2: clean
	g++ 2_read_from_file.cpp -o 2_read_from_file

3: clean
	g++ 3_tsv_to_csv.cpp -o 3_tsv_to_csv

4: clean
	g++ 4_argc_and_argv.cpp -o 4_argc_and_argv

5: clean
	g++ 2_read_from_file.cpp -o 2_read_from_file
	g++ 5_piping_sink.cpp -o 5_piping_sink

6: clean
	g++ 6_server.cpp -o 6_server
	g++ 6_client.cpp -o 6_client

7: clean
	g++ 7_string_stream.cpp -o 7_string_stream

clean:
	@rm -rf 1_read_from_console
	@rm -rf 2_read_from_file
	@rm -rf 3_tsv_to_csv
	@rm -rf 4_argc_and_argv
	@rm -rf 5_piping_sink
	@rm -rf 6_server
	@rm -rf 6_client
	@rm -rf 7_string_stream
