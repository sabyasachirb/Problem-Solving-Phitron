#include<bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];
void dfs(int src)
{
    vis[src] = true;
    for(int x: adj_list[src])
    {
        if(!vis[x])
        {
            dfs(x);
        }
    }
}

int main()
{
    int n, e;
    cin>>n>>e;
    int cnt = 0;
    for(int i = 0; i<e ; i++)
    {
        int a, b;
        cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    for(int i=0; i<n; i++)
    {
        if(!vis[i])
        {
            dfs(i);
            cnt++;
        }
    }
    cout<<cnt<<endl;
}