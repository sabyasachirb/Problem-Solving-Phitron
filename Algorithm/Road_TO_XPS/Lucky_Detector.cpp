#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n;
    cin >> n;
    bool flag = false;
    while(n>0)
    {
        int digit = n%10;
        if(digit == 7)
        {
            flag = true;
            break;
        }
        n = n / 10;
    }
    if(flag)
    {
        cout<<"Lucky"<<endl;
    }
    else
    {
        cout<<"Not Lucky"<<endl;
    }

    return 0;
}


// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
    
//     // Check if the number contains digit 7
//     bool hasLucky = false;
//     int temp = n;
    
//     // Extract each digit and check if it's 7
//     while (temp > 0) {
//         int digit = temp % 10;  // Get the last digit
//         if (digit == 7) {
//             hasLucky = true;
//             break;  // Found 7, no need to continue
//         }
//         temp = temp / 10;  // Remove the last digit
//     }
    
//     // Output the result
//     if (hasLucky) {
//         cout << "Lucky" << endl;
//     } else {
//         cout << "Not Lucky" << endl;
//     }
    
//     return 0;
// }