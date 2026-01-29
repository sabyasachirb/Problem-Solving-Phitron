#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int val;
    cin >> val;
    arr.push_back(val);
    int child = arr.size() - 1;
    while(child!=0)
    {
        int parent = (child - 1) / 2;
        if(arr[parent] < arr[child])
        {
            swap(arr[parent], arr[child]);
        }
        else
        {
            break;
        }
        child = parent;
    }
    for (int x : arr) {
        cout << x << " ";
    }
}