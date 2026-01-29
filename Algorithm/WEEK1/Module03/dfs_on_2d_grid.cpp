#include<bits/stdc++.h>
using namespace std;
int n, m;
char grid[105][105];
bool vis[105][105];
vector<pair<int,int>> p = {{-1,0},{1,0},{0,-1},{0,1}};

bool valid(int ci, int cj)
{
    if(ci<0 || ci>=n || cj <0 || cj>=m)
        return false;
    return true;
}
void dfs(int si, int sj)
{
    cout<<si<<" "<<sj<<endl;
    vis[si][sj] = true;
    for(int i=0; i<4; i++)
    {
        int ci = si + p[i].first;
        int cj = sj + p[i].second;
        if(valid(ci, cj) && !vis[ci][cj])
        {
            dfs(ci, cj);
            vis[ci][cj] = true;
        }
    }
}

int main()
{
    cin>>n>>m;
    for(int i=0; i<n ; i++)
        for(int j=0; j<m; j++)
            cin>>grid[i][j];
    memset(vis, false, sizeof(vis));
    int si, sj;
    cin>>si>>sj;
    dfs(si, sj);
    
}