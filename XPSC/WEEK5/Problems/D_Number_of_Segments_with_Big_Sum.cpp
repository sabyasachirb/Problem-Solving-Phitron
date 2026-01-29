#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    long long n, s;
    cin>>n>>s;
    vector<long long> arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int l=0, r=0;
    long long ans=0, sum=0;
   
    for(int r=0; r<n; r++)
    {
        sum+=arr[r];
        
        while(sum - arr[l]>=s && l<=r)
        {
            sum-=arr[l];
            l++;
        }
        if(sum>=s)
            ans+=(l+1);


    }
    
    cout<<ans<<endl;
    return 0;
}