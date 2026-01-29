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
    // Sorting the array in ascending order
    // sort(arr, arr + n);

    sort(arr, arr + n, greater<int>()); // Sorting in descending order
    
    // Printing the sorted array
    for(int i = 0; i < n; i++)  
    {
        cout << arr[i] << " ";
    }
}