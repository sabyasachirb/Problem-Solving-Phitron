#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n, s;
        cin>>n>>s;
        deque<int> v(n);
        int sum = 0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            sum+=v[i];
        }
        if(sum == s)
            cout<<0<<'\n';
        else
        {
            int left = 0, right = 0;
            int max_len = -1;
            int curr_sum = 0;
            while(left<=right && right<n)
            {
                curr_sum += v[right];
                while(curr_sum > s && left <= right)
                {
                    curr_sum -= v[left];
                    left++;
                }
                if(curr_sum == s)
                {
                    max_len = max(max_len, right - left + 1);
                }
                right++;
            }
            if(max_len == -1)
                cout<<-1<<'\n';
            else
                cout<<n-max_len<<'\n';
        }
    }
    return 0;
}