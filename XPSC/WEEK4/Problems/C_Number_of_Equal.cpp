#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    int l=0, r=0;
    ll ans = 0;
    while(l<n && r<m)
    {

        int cnt1 = 0;
        int cnt2 = 0;
        int val = a[l];
        while (l < n && a[l] == val)
        {
            cnt1++;
            l++;
        }
        while (val > b[r] && r < m)
        {
            r++;
        }
        while (r < m && b[r] == val)
        {
            cnt2++;
            r++;
        }
        ans += (ll)cnt1 * cnt2;
    }
    
    cout << ans << nl;
    
    return 0;
}