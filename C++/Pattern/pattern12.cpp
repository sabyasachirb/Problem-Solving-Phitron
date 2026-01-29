#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int space = 2*(n-1);
    for(int i=1; i<=n; i++)
    {        
        for(int j=1; j<=i; j++)
        {
            cout<<j;
        }
        for(int j=space; j>0; j--)
        {
            cout<<" ";
        }
        for(int j=i; j>0; j--)
        {
            cout<<j;
        }
        cout<<endl;
        space = space-2;;
    }
}