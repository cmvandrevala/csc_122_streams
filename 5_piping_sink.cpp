#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  string line;

  while (getline(cin, line))
  {
    cout << "Line Received!" << endl;
    cout << line << endl;
  }
}
