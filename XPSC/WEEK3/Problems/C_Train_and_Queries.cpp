#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        map<int, set<int>> mp;
        for(int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            mp[x].insert(i);
        }
        while(k--)
        {
            int l,r;
            cin >> l >> r;
            if(mp.find(l) == mp.end() || mp.find(r) == mp.end())
            {
                cout << "NO" << nl;
            }
            else
            {
                auto left = mp[l].begin();
                auto right = mp[r].rbegin();
                if(*left < *right)
                    cout << "YES" << nl;
                else
                    cout << "NO" << nl;
            }

        }
    }
    return 0;
}