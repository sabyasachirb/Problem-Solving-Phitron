#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, val;
    cin >> n >> val;
    map<ll, ll> freq;
    ll sum = 0;
    ll ans = 0;
    freq[0] = 1;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        
        sum += x;
        ans += freq[sum - val];
        freq[sum]++;
    }
    cout << ans << nl;
    return 0;
}