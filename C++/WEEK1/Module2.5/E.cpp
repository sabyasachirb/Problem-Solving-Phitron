#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int max = 0;
    int arr[a];
    for(int i=0; i<a; i++)
    {
        cin >> arr[i];
        if(i == 0 || arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max << endl;
}