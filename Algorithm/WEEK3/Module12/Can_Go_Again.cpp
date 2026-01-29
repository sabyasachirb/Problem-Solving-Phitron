#include<bits/stdc++.h>
using namespace std;
class Edge
{
    public:
    long long int a,b,c;
    Edge(long long int a, long long int b, long long int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};
bool cycle = false;
int n, e;
vector<Edge> adj;
//vector<Edge> adj(1005); problem here, ask in support
vector<long long int> dist(1005, LLONG_MAX);
int src;
void bellman_ford(int dest)
{
    for(int i=0; i<n-1; i++)
    {
        for(auto edge: adj)
        {
            if(dist[edge.a] != LLONG_MAX && dist[edge.a] + edge.c < dist[edge.b])
                dist[edge.b] = dist[edge.a] + edge.c;
        }
    }
    
    for(auto edge: adj)
        {
            if(dist[edge.a] != LLONG_MAX && dist[edge.a] + edge.c < dist[edge.b])
                cycle = true;
        }
    if(cycle) cout<<"Negative Cycle Detected"<<endl;
    else
    {
        if(dist[dest] == LLONG_MAX)
            cout<<"Not Possible"<<endl;
        else
            cout<<dist[dest]<<endl;
    }
}
int main()
{

    cin>>n>>e;
  
    for(int i=0; i<e; i++)
    {
        long long int a, b, w;
        cin>>a>>b>>w;
        adj.push_back(Edge(a,b,w));
    }

    cin>>src;
    dist[src] = 0;

    int t;
    cin>>t;
    while(t--)
    {
        int dest;
        cin>>dest;
        if(!cycle)
            bellman_ford(dest);

    }
}