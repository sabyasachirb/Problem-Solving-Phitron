#include <bits/stdc++.h>
using namespace std;

#define ll long long;
#define nl "\n";

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        deque<int> dq;

        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            if(dq.empty())
            {
                dq.push_back(x);
            }
            else if(x <= dq.front())
            {
                dq.push_front(x);
            }
            else
            {
                dq.push_back(x);
            }
        }
        for(int i=0; i<n; i++)
        {
            cout<<dq[i]<<" ";
        }
        cout<<nl;
    }
    
    return 0;
}