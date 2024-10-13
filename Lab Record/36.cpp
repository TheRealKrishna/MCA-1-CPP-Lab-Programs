// Program to add 2 vectors ( Arrays )

#include <iostream>
using namespace std;

int main() {
  int vec1[3] = {1, 2, 3};
  int vec2[3] = {4, 5, 6};
  int sum[3];

  for (int i = 0; i < 3; i++) {
    sum[i] = vec1[i] + vec2[i];
  }

  cout << "Sum of vectors: ";
  for (int i = 0; i < 3; i++) {
    cout << sum[i] << " ";
  }
  cout << endl;

  return 0;
}