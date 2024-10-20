// Program to add 2 vectors (Arrays)
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v1 = {1, 2, 3, 4, 5};
  vector<int> v2 = {6, 7, 8, 9, 10};
  vector<int> v3;
  for (int i = 0; i < v1.size(); i++) {
    v3.push_back(v1[i] + v2[i]);
  }
  cout << "The sum of the two vectors is: ";
  for (int i = 0; i < v3.size(); i++) {
    cout << v3[i] << " ";
  }
  cout << endl;
  return 0;
}
