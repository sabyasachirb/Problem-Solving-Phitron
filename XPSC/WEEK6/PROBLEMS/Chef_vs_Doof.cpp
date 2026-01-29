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
        vector<int> v(n);
        long long lcm_resul = 1;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            lcm_resul = ((lcm_resul/__gcd(1LL*v[i], lcm_resul))*v[i]);
        }
        if(lcm_resul%2 == 0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
    return 0;
}