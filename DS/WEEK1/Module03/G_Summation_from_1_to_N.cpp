#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int q = 0;
    for (int i = 1; i <= n; i++) {
        q += i;
    }
    
    cout << q;
    
}