#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        priority_queue<int> s;
        ll ans = 0;
        for(int st : a)
        {
            if(st == 0)
            {
                if(!s.empty())
                {
                    ans += s.top();
                    s.pop();
                }
            }
            else
            {
                s.push(st);
                
            }
        }
        cout << ans << nl;
    }
    return 0;
}