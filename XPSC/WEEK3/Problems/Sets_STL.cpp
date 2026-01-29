#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin>>t;
    set<int> s;
    while(t--)
    {
        int x;
        cin>>x;
        
        if(x == 1)
        {
            int a;
            cin>>a;
            s.insert(a);
        }
        else if(x == 2)
        {
            int a;
            cin>>a;
            if(s.find(a) != s.end())
                s.erase(a);
        }
        else
        {
            int a;
            cin>>a;
            if(s.find(a) != s.end())
            {
                cout<<"Yes"<<nl;
            }
            else
            {
                cout<<"No"<<nl;
            }
        }
    }
    return 0;
}