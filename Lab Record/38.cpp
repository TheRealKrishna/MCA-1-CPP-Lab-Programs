// Program to read, display, add and subtract 2 complex numbers

#include <iostream>
using namespace std;

class Complex {
  float real, imag;

 public:
  void read() {
    cout << "Enter real and imaginary parts: ";
    cin >> real >> imag;
  }

  void display() { cout << real << " + " << imag << "i\n"; }

  void add(Complex c1, Complex c2) {
    real = c1.real + c2.real;
    imag = c1.imag + c2.imag;
  }

  void subtract(Complex c1, Complex c2) {
    real = c1.real - c2.real;
    imag = c1.imag - c2.imag;
  }
};

int main() {
  Complex c1, c2, c3;
  c1.read(); c2.read();
  c3.add(c1, c2);
  cout << "Sum: "; c3.display();
  c3.subtract(c1, c2);
  cout << "Difference: "; c3.display();
  return 0;
}