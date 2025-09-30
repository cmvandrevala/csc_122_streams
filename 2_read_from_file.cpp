#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ifstream f;
  f.open("../data/gettysburg_address.txt");

  if (f.is_open())
  {
    string line;
    while (getline(f, line))
    {
      cout << line << endl;
    }
  }
  else
  {
    cout << "Sorry, the file could not be openend." << endl;
  }

  f.close();

  return 0;
}
