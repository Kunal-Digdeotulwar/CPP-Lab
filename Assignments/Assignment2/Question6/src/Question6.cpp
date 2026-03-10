//============================================================================
// Name        : Question6.cpp
// Author      : Kunal Digdeotulwar
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Employee {
	const int employeeId;
	string name;
	float salary;

public:
	Employee(int id, string n, float s) :
			employeeId(id), name(n), salary(s) {
	}

	void display() {
		cout << "Employee ID: " << employeeId << endl;
		cout << "Name: " << name << endl;
		cout << "Salary: " << salary << endl;
	}
};

int main() {
	Employee e1(101, "Amit", 50000);

	e1.display();

	return 0;
}
