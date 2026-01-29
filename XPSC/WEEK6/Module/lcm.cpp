#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int a,b;
    cin>>a>>b;
    // int lcm = (a*b)/__gcd(a,b);
    // cout<<"LCM of "<<a<<" and "<<b<<" is "<<lcm<<'\n';

    int lcm = (a / __gcd(a, b)) * b; // to prevent overflow //O(log(min(a,b)))
    cout<<"LCM of "<<a<<" and "<<b<<" is "<<lcm<<'\n';
    
    return 0;
}