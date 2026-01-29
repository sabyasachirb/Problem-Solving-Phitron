#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        long long left, right;
        cin >> left >> right;
        if(left > right) swap(left, right);
        long long ans = ((right * (right + 1)) / 2) - (((left - 1) * left) / 2);
        cout << ans << "\n";
    }
}
