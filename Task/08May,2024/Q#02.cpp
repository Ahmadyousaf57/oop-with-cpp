
#include <iostream>
#include <string>

using namespace std;

/*
Write a program for a company where users can manage employee records.
Use dynamic memory allocation to create an array of employee objects based
on user input for the number of employees. Allow users to search for
employees by name, department, and salary, add new employees, and
display the employee records at the end.

*/

class Employee
{
    string name, department;
    int salary;

public:
    Employee() {}
    Employee(string n, string d, int s)
    {
        name = n;
        department = d;
        salary = s;
    }
    void display()
    {
 
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: " << salary << endl;
        cout << "---------------------------------" << endl; 
    }
    void set_name(string newName) { name = newName; }
    string get_name() { return name; }
    void set_department(string newDepartment) { department = newDepartment; }
    string get_department() { return department; }
    void set_salary(int newSalary) { salary = newSalary; }
    int get_salary() { return salary; }
};
int main()
{
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;
    Employee *employees = new Employee[n];
    for (int i = 0; i < n; i++)
    {
        string name, department;
        int salary;
        cout << "Enter the name of employee " << i + 1 << ": ";
        cin >> name;
        cout << "Enter the department of employee " << i + 1 << ": ";
        cin >> department;
        cout << "Enter the salary of employee " << i + 1 << ": ";
        cin >> salary;
        employees[i] = Employee(name, department, salary);
    }
    for (int i = 0; i < n; i++)
    {
        employees[i].display();
    }
    string choice;
    cout << "Do you want to search employee? ";
    cin >> choice;
    if (choice == "yes")
        return 0;
    cout << "How do you want to searcy n by name, d by department and s by salary" << endl;
    char c;
    cin >> c;
    switch (c)
    {
    case 'n':
    {
        string name;
        cout << "Enter the name of employee: ";
        cin >> name;
        for (int i = 0; i < n; i++)
        {
            if (employees[i].get_name() == name)
            {
                employees[i].display();
                break;
            }
        }
        break;
    }
    case 'd':
    {
        string department;
        cout << "Enter the department of employee: ";
        cin >> department;
        for (int i = 0; i < n; i++)
        {
            if (employees[i].get_department() == department)
            {
                employees[i].display();
                break;
            }
        }
        break;
    }
    case 's':
    {
        int salary;
        cout << "Enter the salary of employee: ";
        cin >> salary;
        for (int i = 0; i < n; i++)
        {
            if (employees[i].get_salary() == salary)
            {
                employees[i].display();
                break;
            }
        }
        break;
    }
    default:
        cout << "Invalid input" << endl;
        break;
    }
}

