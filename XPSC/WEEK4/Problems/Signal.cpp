#include <bits/stdc++.h>
using namespace std;


int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        string s;
        cin >> n >> s;
        bool foundZero = false;
        int count = 0;
        
        for(int i = 0; i < n; i++) 
        {
            if(s[i] == '0') 
            {
                foundZero = true;
            } else if (foundZero && s[i] == '1') 
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}