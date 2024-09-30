// Program to implement unary operator overloading using member function

#include <iostream>
using namespace std;

class Test {
  int a, b, c;

 public:
  void getData(int x, int y, int z) {
    a = x;
    b = y;
    c = z;
  }
  void operator-() {
    a = -a;
    b = -b;
    c = -c;
  }
  void display() {
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
  }
};

int main() {
  Test t;
  t.getData(10, -20, 30);
  cout << "Original values: " << endl;
  t.display();
  -t;
  cout << "Values after unary operator overloading: " << endl;
  t.display();
  return 0;
}