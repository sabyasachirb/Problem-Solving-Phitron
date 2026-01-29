#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<pair<int, int>> edges;
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        edges.push_back({a, b});
    }
    for (pair<int, int> edge : edges)
    {
        cout << edge.first << " - " << edge.second << endl;
    }
}