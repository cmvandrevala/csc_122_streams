#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ifstream tsvFile;
  ofstream csvFile;
  tsvFile.open("data/video_games.tsv");
  csvFile.open("data/converted_video_games.csv");

  if (tsvFile.is_open())
  {
    string line;
    while (getline(tsvFile, line))
    {
      replace(line.begin(), line.end(), '\t', ',');
      csvFile << line << endl;
    }
  }
  else
  {
    cout << "Sorry, the file could not be openend." << endl;
  }
  tsvFile.close();
  csvFile.close();

  return 0;
}
