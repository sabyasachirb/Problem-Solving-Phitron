#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int x;
        cin >> x;
        vector<int> arr(x);
        for (int i = 0; i < x; i++) {
            cin >> arr[i];
        }
        vector<int> sorted_arr = arr;
        sort(sorted_arr.begin(), sorted_arr.end());
        if (arr == sorted_arr) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}