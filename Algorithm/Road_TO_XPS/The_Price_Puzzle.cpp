#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    set<int>s(arr.begin(), arr.end());

    int q;
    cin>>q;
    while(q--)
    {
        int l, r;
        cin>>l>>r;
        int count = 0;
        for(auto it = s.begin(); it != s.end(); it++)
        {
            int unq = *it;
            if(unq >= l && unq <= r)
            {
                count++;
            }
        }
        vector<set<int>> ss;
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            for (int j = i; j < n; j++)
            {
                sum += arr[j];
                if (sum >= l && sum <= r)
                {
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}