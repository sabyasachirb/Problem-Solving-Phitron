// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         deque<int> arr(n);
//         set<int> elements;
//         for (int i = 0; i < n; ++i) {
//             cin >> arr[i];
//             elements.insert(arr[i]);
//         }
//         int left = 0, right = n-1 ;

//         while(true)
//         {
//             if(arr[left] == *elements.begin() || arr[left] == *elements.rbegin())
//             {
//                 elements.erase(arr[left]);
//                 left++;
//             }
//             else
//             {
//                 break;
//             }
//         }
//         while(true)
//         {
//             if(arr[right] == *elements.rbegin() || arr[right] == *elements.begin())
//             {
//                 elements.erase(arr[right]);
//                 right--;
//             }
//             else
//             {
//                 break;
//             }
//         }
//         if((n <= 3) || left >= right)
//         {
//             cout << "-1\n";
//         }
//         else
//         {
//             cout << left << " " << right << "\n";
//         }
//     }
// }
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        set<int> s;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }
        int i = 0, j = n - 1;
        while(i < j)
        {
            int mn = *s.begin(), mx = *s.rbegin();
            if(a[i] == mn || a[i] == mx)
            {
                s.erase(a[i]);
                i++;
            }
            else if(a[j] == mn || a[j] == mx)
            {
                s.erase(a[j]);
                j--;
            }
            else
            {
                cout << i + 1 << " " << j + 1 << endl;
                break;
            }
        }
        if(i >= j)
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}