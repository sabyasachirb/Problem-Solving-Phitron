#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    int d;
    if(x+y>12)
    {
        d= x+y-12;
    }
    else
    {
        d= x+y;
    }
    cout<<d<<endl;
}