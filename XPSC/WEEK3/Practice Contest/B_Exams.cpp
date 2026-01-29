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
        int x, y, z;
        cin >> x >> y >> z;
        int total_student = x*y;
        if((double)z/total_student > 0.5)
        {
            cout << "YES" << nl;
        }
        else
        {
            cout << "NO" << nl;
        }
        // cout<<( double)z/total_student<< nl;
    }
    return 0;
}