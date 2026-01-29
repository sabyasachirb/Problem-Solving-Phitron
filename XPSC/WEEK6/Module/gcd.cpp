#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int a, b;
    cin>>a>>b;

    int gcd = __gcd(a, b);
    cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd<<'\n';

    return 0;
}