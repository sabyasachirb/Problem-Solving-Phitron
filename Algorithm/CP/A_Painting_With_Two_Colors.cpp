#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int t; 
    cin >> t;
    while (t--) 
    {
        long long n,a,b; 
        cin >> n >> a >> b;
        if((n % 2) != (b % 2)) 
        {
            cout<< "NO" <<endl;
        } 
        else if(a <= b) 
        {
            cout<< "YES" <<endl;
        } 
        else if((n % 2) == (a % 2)) 
        {
            cout<< "YES"<<endl;
        } 
        else 
        {
            cout<< "NO" <<endl;
        }
    }
    return 0;
}
