#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        long long r, g, b;
        cin >> r >> g >> b;
        if(r+g >= b && g+b >= r && b+r >= g)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}