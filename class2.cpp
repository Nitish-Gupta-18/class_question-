#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    int E_id;
    string name;
    int base_salary,travel_allowance,dearness_allowance;
    int monthly, annual;
    void input()
    {
        cout << "Provide Employee ID: ";
        cin >> E_id;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Base Salary: ";
        cin >> base_salary;

        cout << "Dearness Allowance: ";
        cin >> dearness_allowance;

        cout << "Travel Allowance: ";
        cin >> travel_allowance;
    }

    void calculation()
    {
        monthly = base_salary + dearness_allowance + travel_allowance;
        annual = monthly * 12;
    }

    void display()
    {
        cout << "\n--- Employee Details ---\n";
        cout << "Emp ID: " << E_id << endl;
        cout << "Name: " << name << endl;
        cout << "Monthly Salary: " << monthly << endl;
        cout << "Annual Salary: " << annual << endl;
    }
};

int main()
{
    Employee e;
    e.input();
    e.calculation();
    e.display();
    return 0;
}