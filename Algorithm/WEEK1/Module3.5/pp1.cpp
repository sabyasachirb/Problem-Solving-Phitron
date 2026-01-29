#include<bits/stdc++.h>
using namespace std;
vector<int>ab[1005];
bool vis[1005];
int cnt = 0;
int dfs(int src)
{
    
    vis[src]= true;
    cnt++;
    for(int x : ab[src])
    {
        if(!vis[x])
        {
            dfs(x);
        }
    }
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
        ab[a].push_back(b);
        ab[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    int src;
    cin>>src;
    cout<<dfs(src)<<endl;;

}