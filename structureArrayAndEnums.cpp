#include <iostream>
using namespace std;

typedef struct employee
{
    int employee_ID;
    string employeeName;
    string employeeJob;
} Emp;

union money
{
    int euro;
    char pounds;
    float rupee;
};

int main()
{
    // # structure example

    // Direct value assign
    // employee employee1 = {12, "Ramlal", "Author"};
    // cout << employee1.employeeName << endl;

    // // value assignment based on user input
    // Emp freewillEmployee;
    // cout << "Enter Your Employee ID: ";
    // cin >> freewillEmployee.employee_ID;
    // cout << "Enter Your Employee Name: ";
    // cin >> freewillEmployee.employeeName;
    // cout << "Enter Your Employee Job: ";
    // cin >> freewillEmployee.employeeJob;

    // // output
    // cout << "\n\tEmployee Detail: \nEmployee ID: " << freewillEmployee.employee_ID << "\nEmployee Name: " << freewillEmployee.employeeName << "\nEmployee Job: " << freewillEmployee.employeeJob;


    // # Unions Example:
    // union money monetarySystem;
    // monetarySystem.euro = 1;
    // monetarySystem.pounds = 'C';
    // cout<< monetarySystem.euro;
    // cout<< monetarySystem.pounds;


    // Enums
    enum Meal { breakfase, lunch, dinner};
    cout<< breakfase;
    cout<< dinner;

    return 0;
}
