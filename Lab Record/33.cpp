// Program to sort names of students

#include <iostream>
#include <string>
using namespace std;

int main() {
  string names[5] = {"Zara", "Abdul", "Vijay", "Ramesh", "Ajay"};
  string temp;
  for (int i = 0; i < 5; i++) {
    for (int j = i + 1; j < 5; j++) {
      if (names[i] > names[j]) {
        temp = names[i];
        names[i] = names[j];
        names[j] = temp;
      }
    }
  }
  cout << "The sorted names are: " << endl;
  for (int i = 0; i < 5; i++) {
    cout << names[i] << endl;
  }
  return 0;
}