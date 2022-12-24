/*
Write a C++ program that will display your personal info.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string name, email, gender, courseAndSection;
    int age;
    double height, weight;
    cout << "Enter Your Name: ";
    getline(cin, name);
    cout << "Enter Your Age: ";
    cin >> age;
    cout << "Enter Your Height: ";
    cin >> height;
    cout << "Enter Your Weight: ";
    cin >> weight;
    cout << "Gender: ";
    cin >> gender;
    cout << "Enter Your Email: ";
    cin >> email;
    cout << "Enter Your Course and Section: ";
    cin >> courseAndSection;

    cout << "Yourname is: " << name << '\n';
    cout << "Your Age is: " << age << '\n';
    cout << "Your Height is: " << height << '\n';
    cout << "Your Weight is: " << weight << '\n';
    cout << "Your Gender is: " << gender << '\n';
    cout << "Your Email is: " << email << '\n';
    cout << "Your Course and Section is: " << courseAndSection << '\n';

    return 0;
}
