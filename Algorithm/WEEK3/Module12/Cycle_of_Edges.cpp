#include<bits/stdc++.h>
using namespace std;
vector<vector<pair<int,int>>> adj;
int parent[100005];
int group_size[100005];
int dsu_find(int x)
{
    if(parent[x] == -1)
        return x;
    int leader = dsu_find(parent[x]);
    parent[x] = leader; // path compression
    return leader;
}

void dsu_union(int a, int b)
{
    int leader_a = dsu_find(a);
    int leader_b = dsu_find(b);
    if(group_size[leader_a] > group_size[leader_b])
    {
        parent[leader_b] = leader_a;
        group_size[leader_a] += group_size[leader_b];
    }
    else
    {
        parent[leader_a] = leader_b;
        group_size[leader_b] += group_size[leader_a];
    }
    
}

int main()
{
    int n, e;
    cin>>n>>e;
    memset(parent, -1, sizeof(parent));
    memset(group_size, 1, sizeof(group_size));
    int cnt = 0;
    while(e--)
    {
        int a, b;
        cin>>a>>b;
        int leader_a = dsu_find(a);
        int leader_b = dsu_find(b);
        if(leader_a == leader_b)
        {
            cnt++;
        }
        else
            dsu_union(a,b);
    }
    cout<<cnt<<endl;
}