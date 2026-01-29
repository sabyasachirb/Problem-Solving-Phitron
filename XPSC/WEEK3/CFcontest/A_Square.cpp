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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==b && b==c && c==d)
        {
            cout<<"YES"<<nl;
        }
        else
        {
            cout<<"NO"<<nl;
        }
    }
    
    return 0;
}