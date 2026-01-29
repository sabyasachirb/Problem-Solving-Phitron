#include<bits/stdc++.h>
using namespace std;
int main()
{
    //int a[5]; // Static array declaration
    int *a = new int[5]; // Dynamic array declaration
    for(int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
}