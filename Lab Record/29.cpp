// Program to read and display a 2*2*2 array

#include <iostream>
using namespace std;

int main() {
  int arr[2][2][2];
  cout << "Enter the elements of the 2*2*2 array: " << endl;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      for (int k = 0; k < 2; k++) {
        cin >> arr[i][j][k];
      }
    }
  }
  cout << "The elements of the 2*2*2 array are: " << endl;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      for (int k = 0; k < 2; k++) {
        cout << arr[i][j][k] << " ";
      }
      cout << endl;
    }
    cout << endl;
  }
  return 0;
}