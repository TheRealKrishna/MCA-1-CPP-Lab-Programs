// Program to concatenate two strings

#include <iostream>
#include <string>
using namespace std;

int main() {
  string s1, s2;
  cout << "Enter the first string: ";
  getline(cin, s1);
  cout << "Enter the second string: ";
  getline(cin, s2);
  s1 += s2;
  cout << "The concatenated string is: " << s1 << endl;
  return 0;
}
