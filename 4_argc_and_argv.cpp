#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  if (argc == 1)
  {
    cout << "The only argument to the program is the name of the program." << endl;
  }
  else if (argc == 2)
  {
    cout << "You passed in 1 argument to the program" << endl;
  }
  else
  {
    cout << "You passed in " << argc - 1 << " arguments to the program" << endl;
  }

  for (int i = 0; i < argc; i++)
  {
    cout << "Argument " << i << " is " << argv[i] << endl;
  }

  if (argc > 1)
  {
    string my_first_argument = argv[1];
    my_first_argument.append(" (>*_*)>");
    cout << my_first_argument << endl;
  }
}
