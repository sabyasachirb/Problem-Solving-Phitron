#include<bits/stdc++.h>
using namespace std;

int main()
{
    //priority_queue<map<string,int>>final;
    int n;
    cin>>n;
    cin.ignore();
    while(n--)
    {
        // vector<pair<string,int>>pq;
        string s;
        getline(cin,s);
        
        stringstream ss(s);
        map<string,int>freq;
        string word;
        int max_int = 0;
        string max_word;
        while(ss>>word)
        {
            freq[word]++;
            if(freq[word] > max_int)
            {
                max_int = freq[word];
                max_word = word;
            }
        }
        // for(auto it = freq.begin(); it != freq.end(); ++it)
        // {
        //     cout<< it->first << ": " << it->second << endl;
        // }
        
        // for(auto it = freq.begin(); it != freq.end(); it++)
        // {
        //     if(it->second > max_int)
        //     {
        //         max_int = it->second;
        //         max_word = it->first;   
        //     }
        // }
        
        cout<< max_word << " " << max_int << endl;
    }
    return 0;
}
