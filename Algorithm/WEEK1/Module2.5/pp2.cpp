#include<bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];
int dist[1005];
int parent[1005];
vector<int> p;
void bfs(int src, int lvl)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    dist[src] = 0;
    while(!q.empty())
    {
        int par = q.front();
        q.pop();
        if(dist[par] == lvl)
        {
            p.push_back(par);
        }
        for(int xy : adj_list[par])
        {
            if(!vis[xy])
            {
                q.push(xy);
                vis[xy] = true;
                dist[xy] = dist[par]+1;
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
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    
    memset(vis, false, sizeof(vis));
    memset(dist, -1, sizeof(dist));
    memset(parent, -1, sizeof(parent));
    int src = 0;
    int lvl;
    cin>>lvl;
    bfs(src, lvl);
    
    sort(p.begin(),p.end(), greater<int>());
    for(int l : p)
    {
        cout<<l<<" ";
    }

}