#include<bits/stdc++.h>
using namespace std;    

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)     
    {
        cin >> v[i];
    }
    int cnt = 0;
    
    for(int i = 0; i < n; i++)
    {
        bool flag = false;
        for(int j = 0; j<n; j++)
        {
            if(v[i]+ 1 == v[j])
            {
                flag = true;
            }
        }
        if(flag) cnt++;
    }
    cout << cnt << endl;
    
}