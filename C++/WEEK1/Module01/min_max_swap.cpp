#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    cout<< min(a,b)<< endl << max(a,b) << endl;
    // swap(a, b);
    // cout << a << " " << b << endl;
    int temp = a;
    a = b;  
    b = temp;
    cout << a << " " << b << endl;
}