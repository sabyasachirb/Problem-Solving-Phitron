#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    cin >> a;
    if (int(a)>45 && int(a)<65)
    {
        cout << "IS DIGIT" << endl;
    }
    else if (int(a) >= 65 && int(a) <= 96)
    {
        cout << "ALPHA" << endl << "IS CAPITAL" << endl;
    }
    else
    {
        cout << "ALPHA" << endl << "IS SMALL" << endl;
    }
}