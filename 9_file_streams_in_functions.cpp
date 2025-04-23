#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string promptUserForFile(ifstream &infile)
{
  while (true)
  {
    cout << "Enter a filename!" << endl;
    string filename;
    getline(cin, filename);
    infile.open(filename.c_str());
    if (!infile.fail())
    {
      return filename;
    }
    infile.clear();
    cout << "Unable to open that file. Try again." << endl;
  }
}

string longestLine(ifstream &infile)
{
  int length = 0;
  string longest_line;
  string line;
  while (getline(infile, line))
  {
    if (line.length() > length)
    {
      length = line.length();
      longest_line = line;
    }
  }
  return longest_line;
}

int main()
{
  ifstream infile;
  promptUserForFile(infile);
  cout << "The longest line of the file is: " << endl;
  cout << longestLine(infile);
  return 0;
}
