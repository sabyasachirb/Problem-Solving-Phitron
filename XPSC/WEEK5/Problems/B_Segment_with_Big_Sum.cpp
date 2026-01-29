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
    int l=0;
    long long ans=LLONG_MAX, sum=0;
    bool found = false;
    for(int r=0; r<n; r++)
    {
        sum+=arr[r];

        while (sum >= s)
        {
            ans = min(ans, 1LL * (r - l + 1));
            sum -= arr[l];
            l++;
        }
    }
    if(ans == LLONG_MAX) cout<<-1<<endl;
    else cout<<ans<<endl;
    return 0;
}