#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class SalesData
{
public:
  string bookNumber;
  double price;
  int unitsSold;
  double revenue;
};

istream &read(istream &is, SalesData &salesData)
{
  is >> salesData.bookNumber >> salesData.unitsSold >> salesData.price;
  salesData.revenue = salesData.price * salesData.unitsSold;
  return is;
}

ostream &print(ostream &os, SalesData &salesData)
{
  os << "Here is the information for the book with book number "
     << endl
     << salesData.bookNumber
     << endl
     << "Units Sold: "
     << salesData.unitsSold
     << endl
     << "Price: "
     << salesData.price
     << endl
     << "Revenue: "
     << salesData.revenue
     << endl;
  return os;
}

int main()
{
  SalesData salesData;

  ifstream salesDataFile("data/book_data.txt");
  ofstream outfile("./output.txt");

  // We can use these interchangeably!

  // read(salesDataFile, salesData);
  // read(cin, salesData);

  // We can use these interchangeably!

  // print(cout, salesData);
  // print(outfile, salesData);

  return 0;
}
