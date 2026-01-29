#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t;
    cin >> s >> t;
    int n = s.length();
    int cnt = 0;
    for(int i=0; i<n; i++)
    {
        if(s[i] != t[i])
        {
            cnt++;
        }
    }
    cout << cnt << "\n";
    return 0;
}