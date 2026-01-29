// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define nl "\n"

// int main()
// {
//     ios_base::sync_with_stdio(false); cin.tie(NULL);

//     int t, n;
//     cin >> t>>n;
//     priority_queue<pair<int, int>> pq;
//     for(int i = 0; i < n; i++)
//     {
//         int x, ii;
//         cin >> x >> ii;
//         if(x == 0)
//         {
//             int val;
//             cin >> val;
//             pq.push({ii, val});
//         }
//         else if(x == 1)
//         {
//             if(!pq.empty())
//             {
//                 cout << pq.top().second << nl;
//             }
//         }
//         else
//         {
//             if(!pq.empty())
//             {
//                 pq.pop();
//             }
//         }
//     }
    
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    vector<priority_queue<int>> pq(n); 

    while(q--) 
    {
        int type, t;
        cin >> type >> t;

        if(type == 0) 
        {
            int x;
            cin >> x;
            pq[t].push(x);
        } 
        else if(type == 1) 
        {
            if (!pq[t].empty())
                cout << pq[t].top() << "\n";
        } 
        else if(type == 2) 
        {
            if (!pq[t].empty())
                pq[t].pop();
        }
    }
    return 0;
}
