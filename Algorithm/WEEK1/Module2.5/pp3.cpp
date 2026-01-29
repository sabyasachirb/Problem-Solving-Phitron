#include<bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];



int bfs(int src)
{
    int cnt = 0;
//    queue<int> q;
    // q.push(src);
    // vis[src] = true;
    // while(!q.empty())
    // {
    //     int par = q.front();
    //     q.pop();
        for(int xy : adj_list[src])
        {
            if(!vis[xy])
            {
                vis[xy] = true;
                cnt++;
            }
        }
    //}
    return cnt;
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

    int nm;
    cin>>nm;
    cout<<bfs(nm)<<endl;


}