#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int jumps = n-1;
        int position = n;
        for(int i=1; i<=jumps; i++)
        {
            if(i%2!=0)
            {
                position = position - (n-i);
            }
            else
            {
                position = position + (n-i);
            }
        }  
        cout << position << "\n"; 
    }
    return 0;
}