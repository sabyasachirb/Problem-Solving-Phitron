// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define nl "\n"

// int main()
// {
//     ios_base::sync_with_stdio(false); cin.tie(NULL);

//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         vector<char> v(n);
//         for(int i=0; i<n; i++)
//             cin>>v[i];
        
//         set<char> st;
//         for(char c: v)
//         {
//             st.insert(c);
//         }
//         vector<char> new_v;
//         for(auto it = st.begin(); it!=st.end(); it++)
//         {
//             new_v.push_back(*it);
//         }
//         sort(new_v.begin(), new_v.end());
//         map<char, char> mp;
//         int sz = new_v.size();
//         for(int i=0; i<sz/2; i++)
//         {
//             mp[new_v[i]] = new_v[sz-i-1];
//             mp[new_v[sz-i-1]] = new_v[i];
//         }
//         for(int i=0; i<n; i++)
//         {
//             cout<<mp[v[i]];
//         }

//         cout<<nl;
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<char> v(n);
        for(int i=0; i<n; i++)
            cin>>v[i];
        
        set<char> st;
        for(char c: v)
        {
            st.insert(c);
        }
        vector<char> new_v;
        for(auto it = st.begin(); it!=st.end(); it++)
        {
            new_v.push_back(*it);
        }
        
        map<char, char> mp;
        int sz = new_v.size();
        for(int i=0; i<sz/2; i++)
        {
            mp[new_v[i]] = new_v[sz-i-1];
            mp[new_v[sz-i-1]] = new_v[i];
        }
        
        if(sz % 2 == 1)
            mp[new_v[sz/2]] = new_v[sz/2];
            
        for(int i=0; i<n; i++)
        {
            cout<<mp[v[i]];
        }

        cout<<nl;
    }
    return 0;
}