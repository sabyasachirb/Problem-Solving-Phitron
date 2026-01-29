#include<bits/stdc++.h>
using namespace std;
int val[1005], weight[1005];

int knapsack(int n, int mx_weight)
{
    if(n<0 || mx_weight<=0) 
        return 0;
    if(weight[n] <= mx_weight) 
    {
        int op1 =  knapsack(n-1, mx_weight- weight[n]) + val[n];
        int op2 =  knapsack(n-1, mx_weight);
        return max(op1, op2);
    }
    else 
    {
        return knapsack(n-1, mx_weight);
    }

}
int main()
{
    int n, mx_weight;
    cin >> n >> mx_weight;
    for(int i=0; i<=n; i++) 
        cin>>weight[i];
    for(int i = 0; i <= n; i++) 
        cin >> val[i];
    

    cout<<knapsack(n-1, mx_weight)<<endl;
}