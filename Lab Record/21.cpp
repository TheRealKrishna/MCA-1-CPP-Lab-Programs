// Program to calculate GCD using recursive function

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

int main()
{
  int a, b;
  cout << "Enter two numbers: ";
  cin >> a >> b;
  cout << "The GCD of " << a << " and " << b << " is: " << gcd(a, b) << endl;
  return 0;
}