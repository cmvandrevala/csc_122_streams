#include <iostream>

using namespace std;

int main()
{
  string sentence_using_cin_only;
  cout << endl
       << "Let's read in data with cin. Enter a sentence!"
       << endl
       << endl;
  cin >> sentence_using_cin_only;
  cout << sentence_using_cin_only
       << endl;

  // What happens if we remove this?
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  string sentence_using_getline;
  cout << endl
       << "Now let's do it using getline. Enter a sentence!"
       << endl
       << endl;
  getline(cin, sentence_using_getline);
  cout << sentence_using_getline
       << endl;

  return 0;
}
