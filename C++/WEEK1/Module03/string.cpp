#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int roll;
    double gpa;
};
int main()
{
    Student a;
    strcpy(a.name, "Sabyasachi Roy Barman");
    a.roll = 2114164;
    a.gpa = 6.58;

    cout << "Name: " << a.name << endl;
    cout << "Roll: " << a.roll << endl;
    cout << "GPA: " << a.gpa << endl;
    return 0;
}