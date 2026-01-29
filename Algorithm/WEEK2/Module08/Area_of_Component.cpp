#include<bits/stdc++.h>
using namespace std;
char arr[1005][1005];
bool vis[1005][1005];
int n, e;
int cnt;
vector<pair<int, int>> d = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

bool is_valid(int i, int j) {
    if(i< 0 || i >= n || j < 0 || j >= e)
        return false;
    return true;
}
void dfs(int si, int sj) 
{
    cnt++;
    vis[si][sj] = true;
    for(int i=0; i < 4; i++) {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if(is_valid(ci, cj) && !vis[ci][cj] && arr[ci][cj] == '.') {
            dfs(ci, cj);

        }
    }
}
int main()
{
    cin >> n >> e;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < e; j++) {
            cin >> arr[i][j];
        }
    }
    memset(vis, false, sizeof(vis));
    int count = n*e+1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < e; j++) {
            if(arr[i][j] == '.' && !vis[i][j]) {
                cnt = 0; 
                dfs(i,j);
                count = min(count, cnt);
            }
        }
    }
    if(count != n*e+1) cout << count<< endl;
    else cout << -1<< endl;
}