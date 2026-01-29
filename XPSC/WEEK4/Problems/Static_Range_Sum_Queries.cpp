#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, q;
    cin >> n >> q;
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    vector<ll> pref(n+2);
    pref[0] = 0;
    for(int i=1; i<=n; i++)
    {
        pref[i] = pref[i-1] + a[i];
    }
    for(int i=0; i<q; i++)
    {
        int l, r;
        cin >> l >> r;
        ll ans = pref[r] - pref[l-1];
        cout << ans << nl;
    }
    return 0;
}