#include <bits/stdc++.h>
using namespace std;

bool if_prime(int n)
{
    if(n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n;
    cin>>n;
    if(if_prime(n))
        cout<<n<<"This is a prime number"<<'\n';
    else
        cout<<n<<"This is not a prime number"<<'\n';
    
    return 0;
}