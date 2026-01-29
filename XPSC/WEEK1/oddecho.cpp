#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s[n];
    for(int i=0; i<n; i++)
    {
        cin >> s[i];
    }
    for(int i=0; i<n; i++)
    {
        if(i%2 == 0)
        {
            cout << s[i] << "\n";
        }
    }
    return 0;
}