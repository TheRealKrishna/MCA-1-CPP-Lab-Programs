// Program to insert a string in the main text

#include <iostream>
#include <string>
using namespace std;

int main() {
  string main_text, insert_text;
  int position;
  cout << "Enter the main text: ";
  getline(cin, main_text);
  cout << "Enter the text to insert: ";
  getline(cin, insert_text);
  cout << "Enter the position to insert the text: ";
  cin >> position;
  main_text.insert(position, insert_text);
  cout << "The modified text is: " << main_text << endl;
  return 0;
}