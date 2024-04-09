/*
  Function
  - Parameters & Arguments Training
  --- Create Ice Box
  --- Simple Calculator
*/

#include <iostream>
using namespace std;

void iceBox(string item)
{
  if (item == "Coca Cola")
  {
    cout << item << " Will Be More Cold\n";
  }
  else if (item == "Apple" || item == "Juice")
  {
    cout << item << " Will Be More Fresh\n";
  }
  else
  {
    cout << item << " Is Invalid\n";
  }
}

void calc(int numOne, int numTwo)
{
  cout << numOne << " + " << numTwo << " = ";
  cout << numOne + numTwo << "\n";
}

int main()
{
  iceBox("Coca Cola");
  iceBox("Apple");
  iceBox("Juice");
  iceBox("TV Remote");
  calc(10, 90);
  return 0;
}
