// Program to transpose a 3*3 matrix

#include <iostream>
using namespace std;

int main() {
  int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int transpose[3][3];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      transpose[i][j] = arr[j][i];
    }
  }
  cout << "Original matrix: " << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  cout << "Transposed matrix: " << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << transpose[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}