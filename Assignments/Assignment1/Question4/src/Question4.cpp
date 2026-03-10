//============================================================================
// Name        : Question4.cpp
// Author      : Kunal Digdeotulwar
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Employee
{
private:
    int empID;
    string empName;
    double empSalary;

public:
    // Setter methods
    void setEmpID(int id)
    {
        empID = id;
    }

    void setEmpName(string name)
    {
        empName = name;
    }

    void setEmpSalary(double salary)
    {
        empSalary = salary;
    }

    // Getter methods
    int getEmpID()
    {
        return empID;
    }

    string getEmpName()
    {
        return empName;
    }

    double getEmpSalary()
    {
        return empSalary;
    }

    // Calculate Gross Salary
    double calculateGrossSalary()
    {
        double bonus;

        if(empSalary <= 5000)
            bonus = empSalary * 0.10;
        else if(empSalary <= 10000)
            bonus = empSalary * 0.15;
        else
            bonus = empSalary * 0.20;

        return empSalary + bonus;
    }

    // Display employee details
    void displayEmployeeDetails()
    {
        cout << "\nEmployee ID: " << empID << endl;
        cout << "Employee Name: " << empName << endl;
        cout << "Salary: " << empSalary << endl;
        cout << "Gross Salary: " << calculateGrossSalary() << endl;
    }
};

int main()
{
    Employee emp;
    int choice, id;
    string name;
    double salary;

    do
    {
        cout << "\n------ EMPLOYEE PAYROLL MENU ------\n";
        cout << "1. Add New Employee\n";
        cout << "2. Calculate Gross Salary\n";
        cout << "3. Display Employee Details\n";
        cout << "4. Update Employee Information\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Employee ID: ";
                cin >> id;
                emp.setEmpID(id);

                cout << "Enter Employee Name: ";
                cin >> name;
                emp.setEmpName(name);

                cout << "Enter Employee Salary: ";
                cin >> salary;
                emp.setEmpSalary(salary);

                cout << "Employee added successfully.\n";
                break;

            case 2:
                cout << "Gross Salary: "
                     << emp.calculateGrossSalary() << endl;
                break;

            case 3:
                emp.displayEmployeeDetails();
                break;

            case 4:
                cout << "Enter new name: ";
                cin >> name;
                emp.setEmpName(name);

                cout << "Enter new salary: ";
                cin >> salary;
                emp.setEmpSalary(salary);

                cout << "Employee updated successfully.\n";
                break;

            case 5:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice\n";
        }

    } while(choice != 5);

    return 0;
}
