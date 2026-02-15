#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student
{
private:
    string Name;
    int Age;

public:
    Student(string n, int a);

    void setName(string n);
    void setAge(int a);

    string getName() const;
    int getAge() const;

    void printStudentInfo() const;
};

#endif
