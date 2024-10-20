// Program to read and display information of all students in the class

#include <iostream>
#include <string>
using namespace std;

struct Student {
  string name;
  int roll;
};

int main() {
  int n;
  cout << "Enter number of students: ";
  cin >> n;
  Student s[n];
  for (int i = 0; i < n; i++) {
    cout << "Enter name and roll no. of student " << i + 1 << ": ";
    cin >> s[i].name >> s[i].roll;
  }
  cout << "Information of all students:\n";
  for (int i = 0; i < n; i++) {
    cout << "Name: " << s[i].name << endl << "Roll no.: " << s[i].roll << endl;
  }
  return 0;
}