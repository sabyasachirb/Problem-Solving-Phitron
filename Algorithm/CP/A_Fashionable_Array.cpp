#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
      cin>>arr[i];
    }
    sort(arr, arr+n);
    
    if(arr[0]%2 == arr[n-1]%2) cout<<'0'<<endl;
    else
    {
        int i = 0;
        int cnt1 = 0;
      while(i < n && (arr[i]%2 != arr[n-1]%2))
      {
        cnt1++;
        i++;
      }
      int cnt2 = 0;
        i = n-1;
        while(i >= 0 && (arr[i]%2 != arr[0]%2))
        {
          cnt2++;
          i--;
        }
      if(cnt1 > cnt2) cout<<cnt2<<endl;
      else cout<<cnt1<<endl;
  }  
}
}