// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     int t;
//     cin >> t;
    
//     while (t--) {
//         int k, n, m;
//         cin >> k >> n >> m;
        
//         vector<int> a(n), b(m);
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }
//         for (int j = 0; j < m; j++) {
//             cin >> b[j];
//         }
        
//         vector<int> result;
//         int current_lines = k;
//         int i = 0, j = 0;
        
//         while (i < n || j < m) {
//             bool can_do_mono = false;
//             bool can_do_poly = false;
            
//             // Check if Monocarp's next action is valid
//             if (i < n) {
//                 if (a[i] == 0 || a[i] <= current_lines) {
//                     can_do_mono = true;
//                 }
//             }
            
//             // Check if Polycarp's next action is valid
//             if (j < m) {
//                 if (b[j] == 0 || b[j] <= current_lines) {
//                     can_do_poly = true;
//                 }
//             }
            
//             // If neither can proceed, it's impossible
//             if (!can_do_mono && !can_do_poly) {
//                 result.clear();
//                 result.push_back(-1);
//                 break;
//             }
            
//             // Choose which action to take
//             // Priority: prefer adding lines (0) to maximize future options
//             if (can_do_mono && can_do_poly) {
//                 // Both are valid, prefer the one that adds a line
//                 if (a[i] == 0 && b[j] != 0) {
//                     // Monocarp adds a line
//                     result.push_back(a[i]);
//                     current_lines++;
//                     i++;
//                 } else if (b[j] == 0 && a[i] != 0) {
//                     // Polycarp adds a line
//                     result.push_back(b[j]);
//                     current_lines++;
//                     j++;
//                 } else {
//                     // Both add lines or both edit, take smaller value (or Monocarp's)
//                     if (a[i] <= b[j]) {
//                         result.push_back(a[i]);
//                         if (a[i] == 0) current_lines++;
//                         i++;
//                     } else {
//                         result.push_back(b[j]);
//                         if (b[j] == 0) current_lines++;
//                         j++;
//                     }
//                 }
//             } else if (can_do_mono) {
//                 // Only Monocarp can proceed
//                 result.push_back(a[i]);
//                 if (a[i] == 0) current_lines++;
//                 i++;
//             } else {
//                 // Only Polycarp can proceed
//                 result.push_back(b[j]);
//                 if (b[j] == 0) current_lines++;
//                 j++;
//             }
//         }
        
//         // Output result
//         if (result.size() == 1 && result[0] == -1) {
//             cout << -1 << "\n";
//         } else {
//             for (int x : result) {
//                 cout << x << " ";
//             }
//             cout << "\n";
//         }
//     }
    
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int k, n, m;
        cin >> k >> n >> m;

        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int j = 0; j < m; j++)
        {
            cin >> b[j];
        }

        vector<int> result;
        int current_lines = k;
        int i = 0, j = 0;

        while (i < n || j < m)
        {
            bool can_do_mono = false;
            bool can_do_poly = false;

            if (i < n)
            {
                if (a[i] == 0 || a[i] <= current_lines)
                {
                    can_do_mono = true;
                }
            }

            if (j < m)
            {
                if (b[j] == 0 || b[j] <= current_lines)
                {
                    can_do_poly = true;
                }
            }

            if (!can_do_mono && !can_do_poly)
            {
                result.clear();
                result.push_back(-1);
                break;
            }


            if (can_do_mono && can_do_poly)
            {
                if (a[i] == 0 && b[j] != 0)
                {
                    result.push_back(a[i]);
                    current_lines++;
                    i++;
                }
                else if (b[j] == 0 && a[i] != 0)
                {
                    result.push_back(b[j]);
                    current_lines++;
                    j++;
                }
                else
                {
                    if (a[i] <= b[j])
                    {
                        result.push_back(a[i]);
                        if (a[i] == 0)
                            current_lines++;
                        i++;
                    }
                    else
                    {
                        result.push_back(b[j]);
                        if (b[j] == 0)
                            current_lines++;
                        j++;
                    }
                }
            }
            else if (can_do_mono)
            {
                result.push_back(a[i]);
                if (a[i] == 0)
                    current_lines++;
                i++;
            }
            else
            {
                result.push_back(b[j]);
                if (b[j] == 0)
                    current_lines++;
                j++;
            }
        }

        if (result.size() == 1 && result[0] == -1)
        {
            cout << -1 << "\n";
        }
        else
        {
            for (int x : result)
            {
                cout << x << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}