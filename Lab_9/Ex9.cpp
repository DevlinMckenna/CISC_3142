#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void weightedMovingAverage(vector<string> &vecMonth, vector<int> &vecTemp, ofstream &myfile)
{ // range for is less usefull here
  // because we need to initialize to the third element
  // myfile.open("outputData.txt");
  myfile << endl
         << endl;
  for (int i = 2; i < vecTemp.size(); i++)
  {
    double ma;

    ma = (vecTemp[i - 2] + vecTemp[i - 1] * 2 + vecTemp[i] * 3) / 6;

    myfile << "Weighted moving average for " << vecMonth[i] << " is:  " << ma << endl;
  }
  myfile.close();
}

double average(vector<int> &vecTemp)
{
  double avg = 0;
  double sum = 0;
  double n = 0;
  for (auto t : vecTemp)
  {
    sum = sum + t;
    n++;
  }
  avg = sum / n;
  return avg;
}

int main()
{
  ifstream input("inputData.txt");

  vector<int> vecTemp;
  vector<string> vecMonth;

  string month;
  string temperature;

  getline(input, month);

  while (input.good())
  {
    getline(input, month, ',');
    getline(input, temperature, '\n');

    vecMonth.push_back(month);
    vecTemp.push_back(stoi(temperature));

    // cout<< month<<" "<<temperature <<endl;
  }

  ofstream myfile;
  myfile.open("outputData.txt");
  myfile << "raw data is: " << endl;
  for (int i = 0; i < vecMonth.size(); i++)
  {
    myfile << vecMonth[i] << " ";
    myfile << vecTemp[i] << endl;
  }

  myfile << endl
         << "average is: " << average(vecTemp) << endl
         << endl;
  // myfile.close();

  double movavg;
  for (int i = 2; i < vecTemp.size(); i++)
  {
    movavg = (vecTemp[i - 2] + vecTemp[i - 1] + vecTemp[i]) / 3;
    myfile << "moving average for " << vecMonth[i] << " is:  " << movavg << endl;
  }

  // myfile.close();

  weightedMovingAverage(vecMonth, vecTemp, myfile);
}

