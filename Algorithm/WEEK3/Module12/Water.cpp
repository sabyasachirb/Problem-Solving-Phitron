#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
     cin>> t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        vector<int> dubli(arr, arr+n);
        sort(dubli.begin(), dubli.end(), greater<int>());
        int m = dubli[0];
        int m2 = dubli[1];
        int i1,i2;
        for(int i=0; i<n; i++)
        {
            if(arr[i] == m || arr[i] == m2)
            {
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }   
}