#include<bits/stdc++.h>
using namespace std;

int dp[10005];

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        map<char, int> mp1,mp2;
        string s1, s2;
        cin>>s1>>s2;
        for(char c: s1)
        {
            mp1[c]++;
        }
        for(char c: s2)
        {
            mp2[c]++;
        }
        if(mp1==mp2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}