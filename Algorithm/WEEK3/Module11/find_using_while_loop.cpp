#include<bits/stdc++.h>
using namespace std;
int par[1005];
void find(int x)
{
    while(x != -1)
    {
        cout<<x<<" ";
        x = par[x];
    }
}
int main()
{
    memset(par, -1, sizeof(par));
    par[0]= 1;
    par[1]= -1;
    par[2]= 1;
    par[3]= 1;
    par[4]= 5;
    par[5]= 3;

    find(4);
}