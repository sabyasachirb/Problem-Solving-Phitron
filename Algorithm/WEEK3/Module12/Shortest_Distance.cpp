#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin>>n>>e;
    long long int dist[105][105];

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i == j) dist[i][j] = 0;
            else dist[i][j] = LLONG_MAX;
        }
    }
    while(e--)
    {
        long long int a, b, w;
        cin>>a>>b>>w;
        if(w < dist[a][b])
            dist[a][b] = w;
    }

    for(int k=1; k<=n; k++)
    {
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(dist[i][k] != LLONG_MAX && dist[k][j] != LLONG_MAX && dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }

    int t;
    cin>>t;
    while(t--)
    {
        int src, dst;
        cin>>src>>dst;
        if(dist[src][dst] == LLONG_MAX) cout<<-1<<endl;
        else cout<<dist[src][dst]<<endl;
    }
}