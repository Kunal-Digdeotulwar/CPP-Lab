//============================================================================
// Name        : Question5.cpp
// Author      : Kunal Digdeotulwar
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Student
{
    int rollNo;
    string name;
    int marks;

public:
    Student()
    {
        rollNo = 0;
        name = "";
        marks = 0;
    }


    Student(int rollNo, string name, int marks)
    {
        this->rollNo = rollNo;
        this->name = name;
        this->marks = marks;
    }

    void display()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << endl;
    }
};

int main()
{
    Student s1;

    Student s2(1, "Amit", 85);
    Student s3(2, "Rahul", 90);

    s1.display();
    s2.display();
    s3.display();

    return 0;
}
