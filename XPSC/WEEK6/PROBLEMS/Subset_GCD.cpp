#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while(t--) 
    {
        int n, k;
        cin>>n>>k;
        int d = n/k;  
        for(int i=1; i<=k; i++) 
        {
            cout<<i*d;
            if(i<k) cout << " ";
        }
        cout << "\n";
    }
    
    return 0;
}