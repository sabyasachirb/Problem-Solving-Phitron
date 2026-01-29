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
        cin >> n;
        
        long long sum = 0;
        for(int i=0; i<n; i++) 
        {
            int a;
            cin>> a;
            sum += a;
        }
        
        if(sum >= 0) 
        {
            cout<< 0 << endl;
        } 
        else 
        {
            long long neg = -sum; 
            long long x = (neg + n - 1)/n;  
            cout<< x <<endl;
        }
    }
    return 0;
}


