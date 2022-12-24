/*
3. Create a simple payroll program that will display the employee’s information using case statement.
The program should perform the following:

• Ask the user to enter the name of the employee.
• Prompt the user to select between full time and part time by pressing either F (full time) or P (part
time)
• If F is pressed, ask the user to enter his monthly salary. Then display his name and salary.
• If P is pressed, ask the user to type his rate (pay) per hour, the number of hours he worked, and the
numbers of overtime. Then display his name and wage. The computation of overtime pay is: hours of
overtime × (rate per hour × 125%)
• If an invalid letter is pressed, display an error message.
*/
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    string employee_name;
    char work;
    cout << "Enter employee name: ";
    getline(cin, employee_name);
    cout << "Press F for Full Time or P for Part Time: ";
    cin >> work;
    switch (tolower(work))
    {
        case 'p': 
            {
                double rate_per_hour, work_hours, overtime_count;
                cout << "--- Part Time Employee ---\n";
                cout << "Enter rate per hour: ";
                cin >> rate_per_hour;
                cout << "Enter no. of hours worked: ";
                cin >> work_hours;
                cout << "Enter no. of overtime: ";
                cin >> overtime_count;
                double overtime_pay = overtime_count * (rate_per_hour * 1.25);
                cout << "\n___________________________________\n";
                cout << "Employee Name:    " << employee_name;
                cout << "\nBasic Pay:        " << rate_per_hour * work_hours;
                cout << "\nOvertime Pay:     " << overtime_pay;
                cout << "\n\n___________________________________\n";
                cout << "Gross Pay:        " << fixed << setprecision(2)
                    << (rate_per_hour * work_hours) + overtime_pay << "\n";
                break;
            }
        case 'f': 
            {
                double basic_pay;
                cout << "--- Full Time Employee ---\n";
                cout << "Enter Basic Pay: ";
                cin >> basic_pay;
                cout << "\n___________________________________\n";
                cout << "Employee Name:     " << employee_name;
                cout << "\nBasic Pay:         " << basic_pay;
                cout << "\n\n___________________________________\n";
                cout << "Gross Pay:         " << basic_pay;
                break;
            }
        default:
            cout << "Sorry, An Error Occured!\n";
    }

    return 0;
}
