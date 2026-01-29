#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    cin.ignore();
    map<string, int> mp;
    while(t--)
    {
        string s;
        getline(cin, s);
        mp[s]++;
    }
    cout << mp.size() << "\n";
    return 0;
}