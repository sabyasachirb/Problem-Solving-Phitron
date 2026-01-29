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
        int n, k;
        cin >> n >> k;
        int sat = 0;
        if(n == k)
        {
            sat = n+k-1;
        }
        else
        {
            sat = n+k;
        }
        cout << sat << nl;
    }
    
    return 0;
}