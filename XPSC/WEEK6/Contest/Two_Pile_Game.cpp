#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        long long x, y;
        cin >> x >> y;
        long long total = x+2*y;
        if(total%2 == 1)
        {
            cout<<"Alice"<<endl;
        }
        else
        {
            cout<<"Bob" << endl;
        }
    }
    return 0;
}