/*
1.Using nested if statement. Create a program in C++ that find
the largest number among the three numbers entered by the
user.
*/
#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3;
    cout << "Enter the 1st number:";
    cin >> num1;
    cout << "Enter the 2nd number:";
    cin >> num2;
    cout << "Enter 3rd number:";
    cin >> num3;
    if (num1 >= num2) {
        if (num1 >= num3) {
            cout << num1 << " is the largest number.";
        } else {
            cout << num3 << " is the largest number.";
        }
    } else {
        if (num2 >= num3) {
            cout << num2 << " is the largest number.";
        } else {
            cout << num3 << " is the largest number.";
        }
    }
    /*
       I can't use this one :(
       cout << max(num1,max(num2,num2));
    */
    return 0;
}
