#include<bits/stdc++.h>
using namespace std;
int arr[105][105];
bool vis[105][105];
int level[105][105];
int n,m;
vector<pair<int,int>> d = {{1,2}, {1,-2}, {-1,2}, {-1,-2}, {2,1}, {2,-1}, {-2,1}, {-2,-1}};
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
        for(int i=0; i<8; i++)
        {
            int child_x = par_x + d[i].first;
            int child_y = par_y + d[i].second;
            if(is_valid(child_x, child_y) && !vis[child_x][child_y])
            {
                vis[child_x][child_y] = true;
                level[child_x][child_y] = level[par_x][par_y] + 1;
                q.push({child_x, child_y});
            }
        }
    }
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    cin>>n>>m;
    int sx,sy,dx,dy;
    cin>>sx>>sy>>dx>>dy;
    memset(vis, false, sizeof(vis));
    memset(level, 0, sizeof(level));
    bfs(sx,sy);
    if(vis[dx][dy]) cout<<level[dx][dy]<<endl;
    else cout<<-1<<endl;
  }  
}