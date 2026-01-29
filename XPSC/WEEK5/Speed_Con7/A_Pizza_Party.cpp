#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int a,b;
    cin >> a >> b;
    a=a+1;
    int total_slices = a*4+b*3;
    if(total_slices%8==0)
    {
        cout << total_slices/8 << "\n";
    }
    else
    {
        cout << (total_slices/8)+1 << "\n";
    }
    

    
    return 0;
}