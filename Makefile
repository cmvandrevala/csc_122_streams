1_read_from_console: clean
	g++ 1_read_from_console.cpp -o 1_read_from_console

2_read_from_file: clean
	g++ 2_read_from_file.cpp -o 2_read_from_file

3_tsv_to_csv: clean
	g++ 3_tsv_to_csv.cpp -o 3_tsv_to_csv

4_argc_and_argv: clean
	g++ 4_argc_and_argv.cpp -o 4_argc_and_argv

5_piping_source_and_sink: clean
	g++ 2_read_from_file.cpp -o 2_read_from_file
	g++ 5_piping_sink.cpp -o 5_piping_sink

6_sockets: clean
	g++ 6_server.cpp -o 6_server
	g++ 6_client.cpp -o 6_client

clean:
	@rm -rf 1_read_from_console
	@rm -rf 2_read_from_file
	@rm -rf 3_tsv_to_csv
	@rm -rf 4_argc_and_argv
	@rm -rf 5_piping_sink
	@rm -rf 6_server
	@rm -rf 6_client
