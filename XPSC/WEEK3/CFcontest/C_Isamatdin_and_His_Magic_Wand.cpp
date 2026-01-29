#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }

        bool hasEven = false;
        bool hasOdd = false;
        
        for(int i = 0; i < n; i++) 
        {
            if(a[i] % 2 == 0) 
            {
                hasEven = true;
            } 
            else 
            {
                hasOdd = true;
            }
        }
        
        if(hasEven && hasOdd) 
        {
            sort(a.begin(), a.end());
        }
        
        for(int i = 0; i < n; i++) 
        {
            cout << a[i];
            if(i < n - 1) 
            {
                cout << " ";
            }
        }
        cout << nl;
    }
    
    return 0;
}
   

