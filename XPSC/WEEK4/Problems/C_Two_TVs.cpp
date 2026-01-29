#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    map<int, int> mp;
    int t;
    cin >> t;
    while(t--)
    {
        int l, r;
        cin >> l >> r;
        mp[l]++;
        mp[r+1]--;
    }
    int ans = 0;
    bool found = true;
    for(auto p : mp)
    {
        ans = ans + p.second;
        if(ans > 2)
        {
            found = false;
            break;
        }
    }
    if(found)
        cout << "YES" << nl;
    else
        cout << "NO" << nl;
    return 0;
}