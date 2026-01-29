#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    vector<int> count(26, 0);
    for(char c : str)
    {
        count[c - 'a']++; 

    }
    for(int i = 0; i < 26; i++)
    {
        if(count[i] > 0)
        {
            cout << char(i + 'a') << " : " << count[i] << endl;
        }
    }
}