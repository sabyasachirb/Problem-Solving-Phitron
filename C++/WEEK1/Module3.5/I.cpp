#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int a;
        int max = INT_MAX;
        cin >> a;
        int arr[a];
        for(int i = 0; i<a; i++ )
        {
            cin >> arr[i];
        }
        for(int i=1; i<=a ; i++)
        {
            for(int j = i+1; j<=a; j++)
            {
                {
                    if((arr[i] + arr[j] + j - i) < max) max = arr[i] + arr[j] + j - i;
                }
            }
        }
        cout << max;
    }
}