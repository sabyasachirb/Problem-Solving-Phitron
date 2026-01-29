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
        vector<int> a(n);
        for(int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int x = 2;
        bool found = false;
        for(int i = 1; i < n; i++) 
        {
            if(__gcd(x,a[i]) ==1)
            {
                found = true;
                break;
            }
            else
            {
                x++;
            }
        }
        cout<<x<<nl;
    }
    
    return 0;
}