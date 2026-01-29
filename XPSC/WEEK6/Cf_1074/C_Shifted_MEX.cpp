#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        long long mexx = 0;
        vector<long long>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            
        }
        
        for(int i=0; i<n; i++)
        {
            long long ss = v[i];
            set<long long> s;
            for(int j=0; j<n; j++)
            {
                long long val = v[j]-ss;
                if(val>=0 && val<=n)
                {
                    s.insert(val);
                }
            }   
            long long ans = 0;
            while(true){
                auto it = s.find(ans);
                if(it == s.end())
                {
                    break;
                }
                else
                {
                    ans++;
                }
            }
            mexx = max(mexx, ans);
        }
        
        
        
        cout<<mexx<<"\n";
        // for(int i=0; i<n; i++)
        // {
        //     cout<<v[i]<<" ";
        // }
        // cout<<endl;
    }
    return 0;
}