#include "student.h"
#include <iostream>
using namespace std;

Student::Student(string n, int a)
{
    Name = n;
    Age = a;
}

void Student::setName(string n)
{
    Name = n;
}

void Student::setAge(int a)
{
    Age = a;
}

string Student::getName() const
{
    return Name;
}

int Student::getAge() const
{
    return Age;
}

void Student::printStudentInfo() const
{
    cout << "Student " << Name << " Age " << Age << endl;
}
