#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,q;
    cin>>n>>q;
    // int arr[n];
    // for(int i=0; i<n; i++)
    // {
    //     cin>>arr[i];
    // }
    // sort(arr, arr+n);
    vector<long long int> arr;
    while(n--)
    {
        int i;
        cin>>i;
        arr.push_back(i);
    }
    sort(arr.begin(),arr.end());
    while(q--)
    {
        int l = 0;
        int r = arr.size()-1;
        int t;
        cin>>t;
        bool found = false;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (arr[mid] == t)
            {
                cout << "found" << endl;
                found = true;
                break;
            }
            else if (arr[mid] < t)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if(!found) cout << "not found" << endl;
    }

}