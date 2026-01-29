#include <bits/stdc++.h>
using namespace std;

int lcm(int x, int y)
{
    return (x / __gcd(x, y)) * y; // to prevent overflow //O(log(min(a,b)))
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    long long n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;
    long long red = (n/a)*p, blue = (n/b)*q, overlap = (n/(lcm(a,b)));
    long long total = red + blue - (overlap * (p+q)) + (overlap * max(p,q));
    cout<<total<<endl;
    return 0;
}