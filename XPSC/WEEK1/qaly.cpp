#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    double ans = 0.0;
    while(n--)
    {
        double q, a;
        cin >> q >> a;
        ans += q*a;
    }
    cout << fixed << setprecision(3) << ans << "\n";
    return 0;
}