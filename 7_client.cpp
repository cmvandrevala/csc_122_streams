#include <cstring>
#include <iostream>
#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>

int main(int argc, char **argv)
{
  if (argc == 1)
  {
    std::cout << "The only argument to the program is the name of the program." << std::endl;
    std::cout << "You need to include arguments to the client program for the server to receive." << std::endl;
    return 1;
  }

  // creating socket
  int clientSocket = socket(AF_INET, SOCK_STREAM, 0);

  // specifying address
  sockaddr_in serverAddress;
  serverAddress.sin_family = AF_INET;
  serverAddress.sin_port = htons(8080);
  serverAddress.sin_addr.s_addr = INADDR_ANY;

  // sending connection request
  connect(clientSocket, (struct sockaddr *)&serverAddress,
          sizeof(serverAddress));

  // sending data
  const char *message = argv[1];
  send(clientSocket, message, strlen(message), 0);

  // closing socket
  close(clientSocket);

  return 0;
}
