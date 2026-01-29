#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        
        long long gcd1 = 0, gcd2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                gcd1 = __gcd(gcd1, a[i]);
            else
                gcd2 = __gcd(gcd2, a[i]);
        }   
        bool can_gcd1 = true, can_gcd2 = true;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                if (a[i] % gcd2 == 0)
                    can_gcd2 = false;
            }
            else
            {
                if (a[i] % gcd1 == 0)
                    can_gcd1 = false;
            }
        }
        if (can_gcd1)
            cout << gcd1 << '\n';
        else if (can_gcd2)
            cout << gcd2 << '\n';
        else
            cout << 0 << '\n';
    }
    return 0;
}