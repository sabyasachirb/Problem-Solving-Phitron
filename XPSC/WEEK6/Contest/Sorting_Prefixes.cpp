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
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        if(is_sorted(v.begin(), v.end()) == 1) cout<<0<<endl;
        else
        {
            vector<int> copied(v);
            sort(copied.begin(), copied.end());
            for (int i = n - 1; i >= 0; i--)
            {
                if (copied[i] != v[i])
                {
                    cout << v[i] << endl;
                    break;
                }
            }
        }
        
    }
    return 0;
}