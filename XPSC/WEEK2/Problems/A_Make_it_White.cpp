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
//         int n; 
//         cin >> n;
//         deque<char> a(n);
//         for(int i = 0; i < n; i++)
//             cin >> a[i];
//         while(a.front() != 'B' || a.back() != 'B')
//         {
//             if(a.front() == 'W')
//                 a.pop_front();
//             else if(a.back() == 'W')
//                 a.pop_back();
//             else
//                 break;
//         }
//         cout<< a.size() << "\n";
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
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int firstP = -1, lastP = -1;
        firstP = s.find('B');
        lastP = s.rfind('B');
        cout<<lastP - firstP + 1 << "\n";
    }
    return 0;
}