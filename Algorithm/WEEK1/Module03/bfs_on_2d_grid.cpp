#include<bits/stdc++.h>
using namespace std;
int n, m;
char adj_list[105][105];
bool vis[105][105];
int distances[105][105];
vector<pair<int,int>> d = {{-1, 0}, {1,0}, {0,-1}, {0,1}};

bool valid(int a, int b)
{
    if(a<0 || a>=n || b<0 || b>=m)
        return false;
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj]= true;
    distances[si][sj]=0;
    while(!q.empty())
    {
        pair<int,int>par = q.front();
        q.pop();
        int pi = par.first;
        int pj = par.second;
        
        for(int i = 0; i<4; i++)
        {
            int ci = pi + d[i].first;
            int cj = pj + d[i].second;
            if( valid(ci, cj) && !vis[ci][cj])
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                distances[ci][cj] = distances[pi][pj]+1;
            }
        }
    }

}

int main()
{
    cin>>n>>m;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            {
                cin>>adj_list[i][j];
            }
    memset(vis, false, sizeof(vis));
    memset(distances, -1, sizeof(distances));
    int si, sj, di, dj;
    cin>>si>>sj>>di>>dj;
    bfs(si, sj);
    cout<<distances[di][dj]<<endl;

}