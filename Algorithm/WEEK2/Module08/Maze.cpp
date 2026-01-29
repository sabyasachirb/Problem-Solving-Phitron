#include<bits/stdc++.h>
using namespace std;
int m, n;
char arr[1005][1005];
int level[1005][1005];
bool vis[1005][1005];
pair<int,int> parent[1005][1005];
vector<pair<int,int>> d = { {0,-1}, {0,1}, {-1,0},{1,0}};
bool is_valid(int i, int j)
{
    if(i<0 || i>=n || j<0 || j>=m)
        return false;
    return true;
}

void bfs(int sx, int sy)
{
    queue<pair<int,int>> q;
    q.push({sx,sy});
    vis[sx][sy] = true;
    level[sx][sy] = 0;
    while(!q.empty())
    {
        auto it = q.front();
        q.pop();
        int par_x = it.first;
        int par_y = it.second;
        for(int i=0; i<4; i++)
        {
            int child_x = par_x + d[i].first;
            int child_y = par_y + d[i].second;
            if(is_valid(child_x, child_y) && !vis[child_x][child_y] && arr[child_x][child_y] != '#')
            {
                vis[child_x][child_y] = true;
                level[child_x][child_y] = level[par_x][par_y] + 1;
                parent[child_x][child_y] = {par_x, par_y};
                q.push({child_x, child_y});
            }
        }
    }   
}
int main()
{

  cin>>n>>m;
  int si, sj, di, dj;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j] == 'R')
                {si = i; sj = j;}
            if(arr[i][j] == 'D')
                {di = i; dj = j;}
        }
            
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));

    bfs(si, sj);
    if(vis[di][dj])
    {
        int node_i = di;
        int node_j = dj;
    while(1)
    {
        auto it = parent[node_i][node_j];
        node_i = it.first;
        node_j = it.second;

        if(arr[node_i][node_j] == 'R')
        {
            break;
        }
        arr[node_i][node_j] = 'X';
    }
    }
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }

}