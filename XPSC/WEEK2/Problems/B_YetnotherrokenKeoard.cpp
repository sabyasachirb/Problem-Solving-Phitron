// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);


//     int t;
//     cin >> t;
//     while(t--)
//     {
//         string s;
//         cin >> s;
//         vector<bool> keep(s.length(), true);
        
//         for(int i = s.length() - 1; i >= 0; i--)
//         {
//             if(s[i] == 'b')
//             {
//                 keep[i] = false;
//                 for(int j = i - 1; j >= 0; j--)
//                 {
//                     if(islower(s[j]) && keep[j])
//                     {
//                         keep[j] = false;
//                         break;
//                     }
//                 }
//             }
//             else if(s[i] == 'B')
//             {
//                 keep[i] = false;
//                 for(int j = i - 1; j >= 0; j--)
//                 {
//                     if(isupper(s[j]) && keep[j])
//                     {
//                         keep[j] = false;
//                         break;
//                     }
//                 }
//             }
//         }
//         for(int i = 0; i < s.length(); i++)
//         {
//             if(keep[i])
//             {
//                 cout << s[i];
//             }
//         }
//         cout << "\n";

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
        string s;
        cin >> s;
        vector<pair<int, char>> up;
        vector<pair<int, char>> low;

        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == 'b')
            {
                if(!low.empty())
                {
                    low.pop_back();
                }
            }
            else if(s[i] == 'B')
            {
                if(!up.empty())
                {
                    up.pop_back();
                }
            }
            else if(islower(s[i]))
            {
                low.push_back({i, s[i]});
            }
            else
            {
                up.push_back({i, s[i]});
            }
        }
        vector<pair<int, char>> result;
        for(auto &p : low)
        {
            int i = p.first;
            char c = p.second;
            result.push_back({i, c});
        }
        for(auto &p : up)
        {
            int i = p.first;
            char c = p.second;
            result.push_back({i, c});
        }
        sort(result.begin(), result.end());
        for(auto &p : result)
        {
            cout << p.second;
        }
        cout << "\n";
    }
    return 0;
}