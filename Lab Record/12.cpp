// Program to print the following pattern:
/*
A
AB
ABC
ABCD
ABCDE
*/

#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the number of lines: ";
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << char('A' + j);
    }
    cout << endl;
  }
  return 0;
}