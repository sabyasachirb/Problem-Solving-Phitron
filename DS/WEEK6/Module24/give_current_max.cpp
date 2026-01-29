#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    string name;
    int roll;
    int marks;

    Student(string n, int a, int m) {
        this->name = n;
        this->roll = a;
        this->marks = m;
    }
};

class cmp {
    public:
    bool operator()(const Student &a, const Student &b) {
        if(a.marks < b.marks) return true;
        else if(a.marks > b.marks) return false;
        else return a.roll > b.roll;
    }
};

int main()
{
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, cmp> pq;
    while(n--)
    {
        string name;
        int roll;
        int marks;
        cin >> name >> roll >> marks;
        pq.push(Student(name, roll, marks));
    }
    int t;
    cin>>t;
    while(t--)
    {
        int xx;
        cin>> xx;
        if(xx == 0)
        {
        string name;
        int roll;
        int marks;
        cin >> name >> roll >> marks;
        pq.push(Student(name, roll, marks));
        if(pq.empty()) cout << "Empty" << endl;
        else cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }
        else if(xx == 1)
        {
            if(pq.empty()) cout << "Empty" << endl;
            else cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }
        else if(xx == 2)
        {
            if(pq.empty()) cout << "Empty" << endl;
            else
            {
                pq.pop();
                if(pq.empty()) cout << "Empty" << endl;
                else cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            }
        }
    }
}