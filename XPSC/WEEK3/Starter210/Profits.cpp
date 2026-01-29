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
        int n, x;
        cin >> n >> x;
        vector<int> a;
        int profit = 0;
        for(int i = 1; i <= n; i++)
        {
            if(i>x)
            {
                profit+= (i - x);
            }
        }
        cout << profit << nl;
    }
    return 0;
}