#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> ps(n+1);
    for(int i=0; i<q; i++)
    {
        int l, r;
        cin >> l >> r;
        l--; r--;
        ps[l]++;
        ps[r+1]--;
    }
    for(int i=1; i<n; i++)
    {
        ps[i] += ps[i-1];
    }
    sort(ps.rbegin(), ps.rend());
    sort(a.rbegin(), a.rend());
    ll ans = 0;
    for(int i=0; i<n; i++)
    {
        ans += (ll)ps[i] * a[i];
    }
    cout << ans << nl;
    return 0;
}