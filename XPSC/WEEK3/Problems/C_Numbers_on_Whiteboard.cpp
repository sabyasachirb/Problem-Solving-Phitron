#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x = n;
        cout<<2<<nl;
        for(int i=n-1; i>=1; i--)
        {
            cout<<i<<" "<<x<<nl;
            x = (x + i + 1) / 2;
        }
    }
    
    return 0;
}