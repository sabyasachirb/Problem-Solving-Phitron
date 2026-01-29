#include<bits/stdc++.h>
using namespace std;
vector<int> adj_list[105];
bool vis[105];
int parent[105];
bool cycle;
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while(!q.empty())
    {
        int par = q.front();
        q.pop();
        for(auto child: adj_list[par])
        {
            if(vis[child] && parent[par] != child)
            {
                cycle = true;
            }
            if(!vis[child])
            {
                vis[child] = true;
                q.push(child);
                parent[child] = par;

            }
        }
    }
}
int main()
{
    int n, e;
    cin>>n>>e;
    while(e--)
    {
        int u, v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));
    cycle = false;
    for(int i=0; i<n; i++)
    {
        if(!vis[i])
        {
            bfs(i);
        }
    }
    if(cycle)
    {
        cout<<"Cycle is present in the graph"<<endl;
    }
    else
    {
        cout<<"Cycle is not present in the graph"<<endl;
    }
    
}