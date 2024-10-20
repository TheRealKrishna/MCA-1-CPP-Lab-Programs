// Program to read and display information of a student using structure within a
// structure

#include <iostream>
#include <string>
using namespace std;

struct Address {
  string city, state;
};

struct Student {
  string name;
  int roll;
  Address add;
};

int main() {
  Student s;
  cout << "Enter name, roll no., city and state: ";
  cin >> s.name >> s.roll >> s.add.city >> s.add.state;
  cout << "Name: " << s.name << endl
       << "Roll no.: " << s.roll << endl
       << "City: " << s.add.city << endl
       << "State: " << s.add.state << endl;
  return 0;
}