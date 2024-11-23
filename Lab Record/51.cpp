// Program that uses dynamic constructor to allocate memory to an array. Count
// the number of even and odd elements

#include <iostream>
using namespace std;

class Array {
  int *arr, size;
 public:
  Array(int s) : size(s) { arr = new int[size]{1, 2, 3, 4, 5}; }
  void countEvenOdd() {
    int even = 0, odd = 0;
    for (int i = 0; i < size; ++i) {
      if (arr[i] % 2 == 0) ++even;
      else ++odd;
    }
    cout << "Even: " << even << ", Odd: " << odd << endl;
  }
};
int main() {
  Array a(5);
  a.countEvenOdd();
  return 0;
}