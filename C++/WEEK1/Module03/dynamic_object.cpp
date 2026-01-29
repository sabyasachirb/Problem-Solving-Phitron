#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int roll;
    int cls;
    double gpa;

    // Constructor to initialize the Student object
    Student(int roll, int cls, double gpa) {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student* fun()
{
    Student* rahim = new Student(45, 10, 5.00); // Creating an object with parameters
    return rahim; // Returning the object
}
int main()
{
    // Student karim(46, 10, 4.75);
    // cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;
    // Student *rahim = new Student(45, 10, 5.00); // Dynamically creating an object
    // cout << rahim->roll << " " << rahim->cls << " " << rahim->gpa << endl;
    Student *p = fun();
    cout << p->roll << " " << p->cls << " " << p->gpa << endl; // Accessing the dynamically created object
}