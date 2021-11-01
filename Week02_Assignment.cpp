// Week02_Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
//declaring const
float hold = 2.76;
float cost = 4.12;
float profit = 1.45;
int main()
{
//declaring variables
  float xContainer = 0;
  float xKiloCheese = 0;
  float xProfit = 0;
  //outputting welcome message and i/o manipulation with setw to decide width and setfill to input *
  cout << setw(76) << setfill('*') << "*" << endl;
  cout << setw(51) << "This is my 2nd C++ Program" << setw(24) << "*" << endl;
  cout << setw(76) << "*" << endl;
  cout << endl;
  //asking for input
  cout << "Please enter the total number of kilograms of cheese produced: ";

  //setting input into variable xKiloCheese
  cin >> xKiloCheese;
  
  //setting variable container to number of containers to hold cheese
  xContainer = xKiloCheese / hold;

  //outputting number of containers to hold cheese  AND I/O manipulating setw , also setting setfill to space instead of asterisk
  cout << "The number of containers to hold the cheese is: " << setw(28) << setfill(' ') << round(xContainer) << endl;

  // adding " " for freespaces and outputting cost of producing  AND I/O manipulating setw
  cout << "The cost of producing " << round(xContainer) << " " "container(s)" << " " "of cheese is: $" << setw(22) << round(xContainer) * cost << endl;

  //changing xProfit variable
  xProfit = round(xContainer) * profit;

  //outputting profit AND I/O manipulating setw
  cout << "The profit from producing " << round(xContainer) << " " "container(s)" << " " " of cheese is: $" << setw(17) << fixed << setprecision(2) << xProfit << endl;


  

  system("Pause");
  return 0;
  }
