/*
2.Using if..else..if..else statement create a program in C++
that display your grade equivalent and remarks based on the
user input.
*/
#include <iostream>
using namespace std;

int main() {
    int grade;
    cout << "Enter your Grade: ";
    cin >> grade;
    if (grade >= 98) {
        cout << "Grade Equivalent 1:00\nRemarks: Excellent\n";
    } else if (grade >= 95) {
        cout << "Grade Equivalent 1:25\nRemarks: Very Superior\n";
    } else if (grade >= 92) {
        cout << "Grade Equivalent 1:50\nRemarks: Superior\n";
    } else if (grade >= 89) {
        cout << "Grade Equivalent 1.75\nRemarks: High Average\n";
    } else if (grade >= 86) {
        cout << "Grade Equivalent 2:00\nRemarks: Average\n";
    } else if (grade >= 83) {
        cout << "Grade Equivalent 2:25\nRemarks: Low Average\n";
    } else if (grade >= 80) {
        cout << "Grade Equivalent 2:50\nRemarks: Satisfactory\n";
    } else if (grade >= 77) {
        cout << "Grade Equivalent 2:75\nRemarks: Fair\n";
    } else if (grade >= 75) {
        cout << "Grade Equivalent 3:00\nRemarks: Passing\n";
    } else if (grade >= 70) {
        cout << "Grade Equivalent 4:00\nRemarks: Incomplete\n";
    } else {
        cout << "Grade Equivalent 5:00\nRemarks: Failed\n";
    }
    return 0;
}
