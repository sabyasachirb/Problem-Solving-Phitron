#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    char x;
    cin >> x;
    int b;
    cin >> b;
    if (x == '=')
    {
        cout << (a == b ? "Right" : "Wrong") << endl;
    }
    else if (x == '>')
    {
        cout << (a > b ? "Right" : "Wrong") << endl;
    }
    else if (x == '<')
    {
        cout << (a < b ? "Right" : "Wrong") << endl;
    }
}