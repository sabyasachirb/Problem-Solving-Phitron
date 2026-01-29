#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<char> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        int l=0, r=n-1, ans = n;
        while(l<=r)
        {
            if(a[l] == a[r])
            {
                break;
            }
            else
            {
                ans-=2;
                l++;
                r--;
            }
        }
        cout << ans << nl;
    }
    return 0;
}