#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        ll s, k, m;
        cin >> s >> k >> m;

        ll num_flips = m/k;
        ll time_after = m%k;
        ll answer;
        if(num_flips == 0)
        {
            answer = max(0LL, s - m);
        }
        else
        {
            ll top_after_flip = min(s, k);
            answer = max(0LL, top_after_flip - time_after);
        }
        cout << answer << "\n";
    }
    return 0;
}


