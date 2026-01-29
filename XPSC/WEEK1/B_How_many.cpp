#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int s, t;
    cin>>s>>t;
    int cnt = 0;
    int n = 100;
    for(int i=0; i<=n; i++)
        for(int j=0; j<=n; j++)
            for(int k = 0; k<=n; k++)
                {
                    if((1LL*(i+j+k )<= s) && (1LL*i*j*k <=t))
                        cnt++;
                }
    cout<<cnt<<"\n";
    return 0;
}