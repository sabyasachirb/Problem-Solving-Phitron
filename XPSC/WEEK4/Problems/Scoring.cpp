#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int x,y;
        cin >> x >> y;
        int a=0, b=0;
        
        a = (x+y)/2;
        b = y-a;
        cout << a << " " << b << "\n";
    }

    
    return 0;
}