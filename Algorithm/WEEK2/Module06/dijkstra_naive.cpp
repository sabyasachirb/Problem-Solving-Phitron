#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> adj_list[1005];
int dist[1005];

void dijkstra(int src)
{
    queue<pair<int,int>> pq;
    pq.push({src, 0});
    dist[src] = 0;
    while(!pq.empty())
    {
        auto it = pq.front();
        pq.pop();
        int par_node = it.first;
        int par_dis = it.second;
        for(auto child: adj_list[par_node])
        {
            int child_node = child.first;
            int child_dis = child.second;
            if(par_dis + child_dis < dist[child_node])
            {
                dist[child_node] = par_dis + child_dis;
                pq.push({child_node, dist[child_node]});
            }
        }
    }
}
int main()
{
  int n, e;
  cin>>n>>e;
//   vector<pair<int,int>> adj_list[n+1];
  while(e--)
  {
    int a, b,c;
    cin>>a>>b>>c;
    adj_list[a].push_back({b,c});
    adj_list[b].push_back({a,c});
  }
  //memset(dist, INT_MAX, sizeof(dist)); doesn't work
    for(int i=0; i<1005; i++) 
        dist[i] = INT_MAX;
    dijkstra(0);
    for(int i=0; i<n; i++)
        cout<<"Distance of node "<<i<<" from source is "<<dist[i]<<endl;
}