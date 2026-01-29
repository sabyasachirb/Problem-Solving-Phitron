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
        vector<int> v(n+1, 0);
        for(int i=1; i<=n; i++)
        {
            int x;
            cin>>x;
            v[x]++;
        }
        int max_repeat = 0;
        int ans = 0;
        for(int i=1; i<=n; i++)
        {
            if(v[i]>max_repeat)
            {
                max_repeat = v[i];
                ans = i;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}