// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, x;
//     cin >> n >> x;
//     vector<int> arr(n);
//     for(int i=0; i<n; i++)
//     {
//         cin >> arr[i];
//     }
//     sort(arr.begin(), arr.end());
//     int cnt = 0;
//     int init = 0;
//     for(int i=0; i<n; i++)
//     {
//         if(arr[i] == init && arr[i] < x)
//         {
//             init+=1;
//         }
//         else if(arr[i] > init && arr[i] < x)
//         {
//             cnt += arr[i]-init;
//             init = arr[i]+1;
//         }
//         else if(arr[i] == x)
//         {
//             cnt += 1;
//             break;
//         }
//         else if(arr[i] > init && arr[i] > x)
//         {
//             cnt += x - init;
//             break;
//         }
//         else
//         {
//             continue;
//         }
        
//     }
    
//     cout << cnt << "\n";
//     return 0;
    
// }
    









#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x;
    cin >> n >> x;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        s.insert(val);
    }
    int op = 0;
    for (int i = 0; i < x; i++)
    {
        if(s.find(i) == s.end())
            op++;
    }
    if(s.find(x) != s.end())
        op++;
    cout << op << "\n";
    return 0;
}

