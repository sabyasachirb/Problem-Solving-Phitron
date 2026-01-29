#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    while(true)
    {
    cin >> n;
    if(n == 0) break;
    long long int ab = 1LL*(n * (n + 1) * (2 * n + 1)) / 6;
    cout << ab << "\n";
    }

    return 0;
}