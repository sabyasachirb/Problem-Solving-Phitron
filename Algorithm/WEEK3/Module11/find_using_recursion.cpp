#include<bits/stdc++.h>
using namespace std;
int par[1005];
int find(int x)
{
    if(par[x] == -1)
        return x;
    int leader = find(par[x]);
    par[x] = leader; // path compression
    return leader;
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

    cout<<find(4);
}