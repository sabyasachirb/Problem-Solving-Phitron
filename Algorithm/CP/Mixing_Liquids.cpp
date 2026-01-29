// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--) 
//     {
//         int a, b;
//         cin >> a >> b;
//         int c= 0;
//         if(a<1 || b<2)
//         {
//             cout<<c<<endl;
//         }
//         else if(a<b)
//         {
        
//             int ans = 0;
//             while(a>=1)
//             {
//                 a--;
//                 b -= 2;
//                 ans = ans+3;
//             }
//             cout<<ans<<endl;
    
//         }
//         else if(a>b)
//         {
//             int ans = 0;
//             while(b>=2)
//             {
//                 a--;
//                 b -= 2;
//                 ans = ans+3;
//             }
//             cout<<ans<<endl;
//         }
//         else if(a==b)
//         {
//             int ans = 0;
//             while(a>=1 && b>=2)
//             {
//                 a--;
//                 b -= 2;
//                 ans = ans+3;
//             }
//             cout<<ans<<endl;
//         }
//     }
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        int a, b;
        cin>>a>>b;
        int sets = min(a, b/2);  
        cout << sets*3 << endl;   
    }
}
