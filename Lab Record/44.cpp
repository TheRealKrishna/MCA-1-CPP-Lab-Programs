// Program to enter a rational number, simplify and display it

#include <iostream>
#include <numeric>
using namespace std;

int main() {
  int num, den;
  cout << "Enter numerator: ";
  cin >> num;
  cout << "Enter denominator: ";
  cin >> den;
  int gc = gcd(num, den);
  num /= gc;
  den /= gc;
  cout << "Simplified rational number: " << num << "/" << den << endl;
  return 0;
}
