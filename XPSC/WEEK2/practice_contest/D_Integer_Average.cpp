#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        bool found = false;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                double avg = (a[i] + a[j]) / 2.0;
                if(floor(avg) == avg)
                {
                    found = true;
                    break;
                }
                    
            }
        }
            
        if(found)
            cout << "YES\n";
        else
            cout << "NO\n";

    }

    return 0;
}