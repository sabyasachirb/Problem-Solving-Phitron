#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    char arr[n];
    for(int i=0; i<n; i++)
    {
      cin>>arr[i];
    }
    int cnt = 0;
    for(int i=0; i<n; i++)
    {
      if(arr[i] == '1') cnt++;
    }
    int ans = 0;
    for(int i=0; i<n; i++)
    {
      if(arr[i] == '0') ans += cnt+1;
      else ans += cnt-1;
    }
    cout<<ans<<endl;
  }  
}