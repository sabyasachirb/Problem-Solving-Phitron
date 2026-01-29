// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     map<string, int> registration_count;
//     while(t--)
//     {
//         string s;
//         cin >> s;
//         if(registration_count.find(s) == registration_count.end())
//         {
//             registration_count[s] = 0;
//             cout << "OK\n";
//         }
//         else
//         {
//             registration_count[s]++;
//             cout << s << registration_count[s] << "\n";
//         }
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios::sync_with_stdio(false);
 cin.tie(nullptr);

    int tc; cin>>tc;
    map<string,int> mp;
    while(tc--)
    {
        
        string s;
        cin>>s;
        
        if(mp.find(s)==mp.end())
        {
            cout<<"OK"<<"\n";
            mp[s]=1;
        }
        else
        {
            cout<<s<<mp[s]<<"\n";
            mp[s]++;
        }
    }
    return 0;
}