#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin >> n;
        long long m = (n - 1)/2;
        long long ans = m*(n-m-2);
        if(ans < 0)
            ans = 0;
        cout << ans << '\n';
    }
    return 0;
}
