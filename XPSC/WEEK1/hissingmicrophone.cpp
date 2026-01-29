#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int n = s.length();
    bool found = false;
    for(int i=0; i+1<n; i++)
    {
        if(s[i] == 's' && s[i+1] == 's')
        {
            found = true;
        }
    }
    if(found)
    {
        cout << "hiss" << "\n";
    }
    else
    {
        cout << "no hiss" << "\n";
    }
    return 0;
}