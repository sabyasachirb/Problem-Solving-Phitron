// #include<bits/stdc++.h>
// using namespace std;

// class Edge
// {
//     public:
//     int a,b, c;
//     Edge(int a, int b, int c)
//     {
//         this->a = a;
//         this->b = b;
//         this->c = c;
//     }
// };
// int main()
// {
//     int n, e;
//     cin>>n>>e;
//     vector<Edge> edge_list;
//     int dis[1005];
//     while(e--)
//     {
//         int a,b,c;
//         cin>>a>>b>>c;
//         edge_list.push_back(Edge(a,b,c));
//     }
//     for(int i=0; i<n; i++)
//         dis[i] = INT_MAX;
//     dis[0] = 0;
//     for(int i=0; i<n-1; i++)
//     {
//         for(auto edge: edge_list)
//         {
//             if(dis[edge.a] != INT_MAX && dis[edge.a] + edge.c < dis[edge.b])
//                 dis[edge.b] = dis[edge.a] + edge.c;
//         }
//     }
//     for(int i=0; i<n; i++)
//         cout<<i<< " -> "<<dis[i]<<endl;
// }



#include<bits/stdc++.h>
using namespace std;

class Edge
{
    public:
    int a,b, c;
    Edge(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

vector<Edge> edge_list;
int dis[1005];
    int n, e;
void BellmanFord()
{
     for(int i=0; i<n-1; i++)
    {
        for(auto edge: edge_list)
        {
            if(dis[edge.a] != INT_MAX && dis[edge.a] + edge.c < dis[edge.b])
                dis[edge.b] = dis[edge.a] + edge.c;
        }
    }
}
int main()
{
    cin>>n>>e;
    while(e--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        edge_list.push_back(Edge(a,b,c));
    }
    for(int i=0; i<n; i++)
        dis[i] = INT_MAX;
    dis[0] = 0;
   BellmanFord();
    for(int i=0; i<n; i++)
        cout<<i<< " -> "<<dis[i]<<endl;
}
