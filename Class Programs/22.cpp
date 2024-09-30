// Program to implement unary operator overloading using friend function

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
  friend void operator-(Test &);
  void display() {
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
  }
};

void operator-(Test &t) {
  t.a = -t.a;
  t.b = -t.b;
  t.c = -t.c;
}

int main() {
  Test t;
  t.getData(10, -20, 30);
  cout << "Original values: " << endl;
  t.display();
  operator-(t);
  cout << "Values after unary operator overloading: " << endl;
  t.display();
  return 0;
}