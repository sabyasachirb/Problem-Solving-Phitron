#include <bits/stdc++.h>
using namespace std;
int permutation(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    if(n> 1) return (n*permutation(n-1))%10;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    while(n--)
    {
        int x;
        cin >> x;
        cout<<permutation(x)<<endl;
    }
    return 0;
}