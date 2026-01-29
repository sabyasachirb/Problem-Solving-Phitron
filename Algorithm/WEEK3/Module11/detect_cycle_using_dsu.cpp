#include<bits/stdc++.h>
using namespace std;
int par[1005];
int group_size[1005];
int dsu_find(int x)
{
    if(par[x] == -1)
        return x;
    int leader = dsu_find(par[x]);
    par[x] = leader; // path compression
    return leader;
}

void dsu_union(int a, int b)
{
    int leader_a = dsu_find(a);
    int leader_b = dsu_find(b);
    if(group_size[leader_a] > group_size[leader_b])
    {
        par[leader_b] = leader_a;
        group_size[leader_a] += group_size[leader_b];
    }
    else
    {
        par[leader_a] = leader_b;
        group_size[leader_b] += group_size[leader_a];
    }
}
int main()
{
    memset(par, -1, sizeof(par));
    memset(group_size, 1, sizeof(group_size));
    
    int n, e;
    cin>>n>>e;
    bool cycle = false;
    for(int i=0; i<e; i++)
    {
        int a, b;
        cin>>a>>b;
        int leader_a = dsu_find(a);
        int leader_b = dsu_find(b);
        if(leader_a == leader_b)
        {
            cycle = true;
            break;
        }
        else
            dsu_union(a,b);
    }
    if(cycle) cout<<"Cycle Detected"<<endl;
    else cout<<"No Cycle"<<endl;
}