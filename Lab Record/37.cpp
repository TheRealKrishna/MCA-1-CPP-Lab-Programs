// Program to copy a given string into a new string. Memory for the new
// string must be allocated dynamically

#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cout << "Enter a string: ";
  getline(cin, s);
  string* s2 = new string(s);
  cout << "The copied string is: " << *s2 << endl;
  delete s2;
  return 0;
}