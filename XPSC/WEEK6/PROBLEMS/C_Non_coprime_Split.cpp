#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int l, r;
        cin >> l >> r;
        if(r<=3)
        {
            cout<<"-1\n";
        }
        else if( l==r && r%2==1)
        {
            int x = sqrt(r);
            for(int i=2;i<=x;i++)
            {
                if(r%i==0)
                {
                    cout<<i<<" "<<r-i<<"\n";
                    return;
                }
            }
            cout<<"-1\n";
        }
        else
        {
            cout<<r/2<<" "<< r/2<<"\n";
        }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}