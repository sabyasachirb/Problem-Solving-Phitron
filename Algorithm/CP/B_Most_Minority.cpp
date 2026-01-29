#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    char adj_list[n][m];
    
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            {
                cin>>adj_list[i][j];
            }

    vector<int>arr(n,0);
    
    for(int j=0; j<m; j++)
    {
        int one=0;
        int zero = 0;
        for(int i=0; i<n; i++)
        {
            if(adj_list[i][j] == '1') one++;
            else zero++;
        }
        if(one>zero)
        {
            for(int i=0; i<n; i++)
            {
                if(adj_list[i][j] == '0') arr[i]++;
            }
        }
        else if(zero>one)
        {
            for(int i=0; i<n; i++)
            {
                if(adj_list[i][j] == '1') arr[i]++;
            }
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                if(adj_list[i][j] == '1') arr[i]++;
            }
        }
    }
    int mex =0;
    for(int i=0; i<n; i++)
    {
        mex = max(mex, arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] == mex) {
            cout << (i+1) << " ";
        }
    }
    cout << endl;

    return 0;
}       