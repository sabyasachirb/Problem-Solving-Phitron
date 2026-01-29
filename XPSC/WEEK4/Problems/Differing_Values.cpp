#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int one = 0, zero = 0;
        for(char ch: s)
        {
            if(ch == '0') zero++;
            else one++;
        }
        
    }
    return 0;
}