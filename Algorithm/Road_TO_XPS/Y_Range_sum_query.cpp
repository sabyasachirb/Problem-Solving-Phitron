#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    long long int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    long long int pre[n];

    pre[0] = arr[0];
    for(int i=1; i<n; i++)
    {
        pre[i] = pre[i-1] + arr[i];
    }
    
    while(t--)
    {
        int l, r;
        cin>>l>>r;
        if(l == 1)
        {
            cout<<pre[r-1]<<endl;
        }
        else cout<<pre[r-1] - pre[l-2]<<endl;
    }
}


// #include<bits/stdc++.h>
// using namespace std;

// void prefix_sum(const long long int arr[], long long int pre[], int n)
// {
//     pre[0] = arr[0];
//     for(int i=1; i<n; i++)
//     {
//         pre[i] = pre[i-1] + arr[i];
//     }
// }

// int main()
// {
//     int n, t;
//     cin >> n >> t;
//     long long int arr[n];
//     for(int i=0; i<n; i++)
//     {
//         cin >> arr[i];
//     }
    
//     long long int pre[n];
//     prefix_sum(arr, pre, n);

//     while(t--)
//     {
//         int l, r;
//         cin >> l >> r;
//         if(l == 1)
//             cout << pre[r-1] << endl;
//         else
//             cout << pre[r-1] - pre[l-2] << endl;
//     }
// }