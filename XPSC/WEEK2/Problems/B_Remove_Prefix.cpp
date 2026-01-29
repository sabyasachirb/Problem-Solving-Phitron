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
        vector<int> v(n);
        for(int i = 0; i<n; i++)
            cin>>v[i];
        set<int> st;
        int cnt = 0;
        for(int i=n-1; i>=0; i--)
        {
            if(st.find(v[i]) == st.end())
            {
                st.insert(v[i]);
                cnt++;
            }
            else
            {
                break;
            }
        }
        cout<<n-cnt<<nl;
    }
    return 0;
}