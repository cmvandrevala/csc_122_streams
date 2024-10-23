#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int countWords(string str)
{
  stringstream ss(str);

  string word;

  int count = 0;
  while (ss >> word)
  {
    count++;
  }
  return count;
}

int main()
{
  string sentence;
  cout << endl
       << "Enter a sentence!"
       << endl;
  getline(cin, sentence);
  cout << " Number of words are: "
       << countWords(sentence)
       << endl;
  return 0;
}
