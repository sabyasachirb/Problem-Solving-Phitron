#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin>>n>>q;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    while(q--)
    {
        int l, r;
        cin>>l>>r;
        int non_neg = 0;
        set<int>s;
        for(int i=l-1; i<r; i++)
        {
            s.insert(arr[i]);
        }
        while(s.count(non_neg))
        {
            non_neg++;
        }
        
        cout<<non_neg<<"\n";
    }
    return 0;
}