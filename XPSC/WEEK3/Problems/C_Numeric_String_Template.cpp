#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int tt;
        cin >> tt;
        while(tt--)
        {
            string s;
            cin >> s;
            if(s.size() != n)
            {
                cout << "NO" << nl;
            }
            else
            {
                map<int, char> num_to_char;
                map<char, int> char_to_num;
                bool valid = true;
                for(int i = 0; i < n; i++)
                {
                    int num = arr[i];
                    char ch = s[i];

                    if(num_to_char.find(num) == num_to_char.end() && char_to_num.find(ch) == char_to_num.end())
                    {
                        num_to_char[num] = ch;
                        char_to_num[ch] = num;
                    }
                    else if(num_to_char.find(num) != num_to_char.end() && num_to_char[num] != ch)
                    {
                        if(num_to_char[num] != ch)
                        {
                            valid = false;
                            break;
                        }
                    }
                    else if(char_to_num.find(ch) != char_to_num.end() && char_to_num[ch] != num)
                    {
                        if(char_to_num[ch] != num)
                        {
                            valid = false;
                            break;
                        }
                    }
                }
                if(valid)
                {
                    cout << "YES" << nl;
                }
                else
                {
                    cout << "NO" << nl;
                }
            }

        }
    }
    return 0;
}