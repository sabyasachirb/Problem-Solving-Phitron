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
        
        if(n % 3==0)
        {
            cout << 3 << "\n";
        }
        else
        {
            cout << 1 << "\n";
        }
    }
    return 0;
}