#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int m, n;
        cin>>m>>n;
        vector<int>first_layer(m);
        vector<int>secon_layer(n);
        for(int i=0; i<m;i++)
        {
            cin>>first_layer[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>secon_layer[i];
        }
        int total_num = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(first_layer[j]>secon_layer[i])
                {
                    total_num++;
                }
            }
        }
        cout<<total_num<<endl;
    }
    return 0;
}