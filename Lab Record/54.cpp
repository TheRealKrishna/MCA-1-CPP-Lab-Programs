// Program to demonstrate the use of type conversions with distance class

#include <iostream>
using namespace std;

class Distance {
  int feet;
  float inches;

 public:
  Distance(int f, float i) : feet(f), inches(i) {}
  operator float() const { return feet * 12 + inches; }
};

int main() {
  Distance d(5, 8.5);
  float total_inches = d;
  cout << "Total inches: " << total_inches << endl;
  return 0;
}