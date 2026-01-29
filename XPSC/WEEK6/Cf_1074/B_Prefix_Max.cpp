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
        long long largest_num = LLONG_MIN;
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            largest_num = max(largest_num, 1LL*v[i]);
        }
        cout<<largest_num*n<<'\n';
    }
    return 0;
}