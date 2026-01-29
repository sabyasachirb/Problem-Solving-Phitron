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
        string a1;
        cin>>a1;
        string b1;
        cin>>b1;
        int free_even = 0, free_odd = 0;
        for(int i=0; i<b1.size(); i++)
        {
            if(i%2==0 && b1[i] == '0')
            {
                free_odd++;
                
            }
            else if(i%2!= 0 && b1[i] == '0')
            {
                free_even++;
            }
        }
        int odd=0, even = 0;
        for(int i=0; i<a1.size(); i++)
        {
            if(i%2==0 && a1[i] == '1')
            {
                odd++;

            }
            else if(i%2!= 0 && a1[i] == '1')
            {
                even++;                
            }
        }
        if(free_even>=odd && free_odd>=even)
            cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }
    return 0;
}