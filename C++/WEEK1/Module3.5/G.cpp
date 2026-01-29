#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    string temp = "YES";
    for (int i = 0; i < n; i++)
    {
        if(arr[i]  != arr[n-i-1])
        {
            temp = "NO";
        }
    }
    cout << temp << endl;
}