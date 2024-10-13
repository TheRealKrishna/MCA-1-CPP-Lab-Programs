// Program to add 2 integers using pointer

#include <iostream>
using namespace std;

int main() {
    int num1, num2, sum;
    int *ptr1, *ptr2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    ptr1 = &num1;
    ptr2 = &num2;

    sum = *ptr1 + *ptr2;

    cout << "Sum = " << sum << endl;

    return 0;
}