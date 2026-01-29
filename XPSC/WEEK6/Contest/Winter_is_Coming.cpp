#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n, a,b;
        cin >> n >> a >> b;
        vector<int> arr(n);
        int count = 0;
        bool flag = false;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            if(arr[i] < a)
            {
                if(!flag)
                {
                    count++;
                    flag = true;
                }
            }
            else if(arr[i] > b)
            {
                flag = false;
            }
            
            
        }
        cout << count << "\n";
        
    }
    return 0;
}