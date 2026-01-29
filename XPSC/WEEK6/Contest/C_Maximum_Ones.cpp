#include <bits/stdc++.h>
using namespace std;

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
        int zeroes = 0, current_ones = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '0')
            {
                zeroes++;
            }
            else
            {
                current_ones++;
            }
        }
        if(zeroes < k)
        {
            current_ones += zeroes;
        }
        else
        {
            current_ones += k;
        }
        cout << current_ones << endl;
    }
    return 0;
}