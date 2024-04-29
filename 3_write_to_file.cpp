#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ofstream f;
  f.open("data/grocery_list.txt");

  string grocery_list[] = {"Eggs",
                           "Milk",
                           "Bacon",
                           "Spinach",
                           "Ice Cream"};

  if (f.is_open())
  {
    for (int i = 0; i < 5; i++)
    {
      f << grocery_list[i] << endl;
    }
  }
  else
  {
    cout << "Sorry, the file could not be openend." << endl;
  }

  f.close();

  return 0;
}
