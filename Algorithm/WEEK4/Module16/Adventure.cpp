#include<bits/stdc++.h>
using namespace std;
int val[1005], weight[1005];
int dp[1005][1005];

int knapsack(int n, int w)
{
    if(n<0 || w<=0)
        return 0;
    if(dp[n][w] != -1)
        return dp[n][w];
    if(weight[n] <= w)
    {
        int op1 =  knapsack(n-1, w - weight[n]) + val[n];
        int op2 =  knapsack(n-1, w);
        dp[n][w] =  max(op1, op2);
        return dp[n][w];
    }
    else 
    {
        dp[n][w] =  knapsack(n-1, w);
        return dp[n][w];
    }
}

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int N, W;
        cin>>N>>W;
        for(int i=0; i<N; i++)
        {
            cin>>weight[i];
        }
        for(int i=0; i<N; i++)
        {
            cin>>val[i];
        }
        for(int i=0; i<=N; i++)
        {
            for(int j=0; j<=W; j++)
            {
                dp[i][j] = -1;
            }
        }
        cout<<knapsack(N-1, W)<<endl;
    }
}