#include<bits/stdc++.h>
using namespace std;

void fun(int* &p)
{
    int y = 15;
    p = &y; 
    cout << "Value of p: " << *p << endl; 
}

int main()
{
    int x = 10;
    int *p = &x; 
    fun(p);
    cout << *p << endl; // Output: Value of p: 15
}