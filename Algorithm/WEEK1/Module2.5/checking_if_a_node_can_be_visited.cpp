#include<bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];

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
            if(!vis[child])
            {
                vis[child] = true;
                q.push(child);
            }
        }
    }
}

int main()
{
    int n,e;
    cin>>n>>e;
    
    for(int i=0; i<e; i++)
    {
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    int src, dest;
    cin>>src>>dest;
    memset(vis, false, sizeof(vis));
    bfs(src);
    if(vis[dest])
        cout<<"YES";
    else
        cout<<"NO";
}