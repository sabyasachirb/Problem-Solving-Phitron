#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin>>t;
    while (t--) {

        long long n, m;
        cin>>n>>m;
        if(m >= n && m <= 3*n && (m - n)%2 == 0) 
        {
            cout<<"YES"<<endl;
        } 
        else 
        {
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}