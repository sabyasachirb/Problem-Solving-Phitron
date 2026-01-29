#include<bits/stdc++.h>
using namespace std;

int dp[100005];

bool rec(int n)
{
    if(n == 1) return true;
    if(n < 1) return false;
    if(dp[n] != -1) return dp[n];
    bool add = rec(n-3);
    bool multi = false;
    if(n%2 == 0) multi = rec(n/2);
    return dp[n] = add || multi;
}
int main()
{
    int t;
    cin>>t;
   
    memset(dp, -1, sizeof(dp));
    while(t--)
    {
        int n; 
        cin>>n;
        if(rec(n) == true)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}