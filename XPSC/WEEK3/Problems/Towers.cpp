#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n;
    cin >> n;
    multiset<int> s;
    for(int i = 0; i < n; i++)
    {
        int h;
        cin >> h;
        auto it = s.upper_bound(h);
        if(it != s.end())
        {
            s.erase(it);
        }
        s.insert(h);
    }
    cout << s.size() << nl;
    return 0;
}