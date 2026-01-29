#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    long long n, s;
    cin >> n >> s;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int left = 0;
    long long gs = 0;
    long long min_v = 0, max_v = 0;
    multiset<long long> ms;
    for (int i = 0; i < n; i++)
    {
        ms.insert(arr[i]);
        min_v = *ms.begin();
        max_v = *ms.rbegin();

        if(max_v - min_v <= s)
        {
            gs += (i - left + 1);
        }
        else
        {
            while(max_v - min_v > s && left <= i)
            {
                ms.erase(ms.find(arr[left]));
                left++;
                if(!ms.empty())
                {
                    min_v = *ms.begin();
                    max_v = *ms.rbegin();
                }
            }
            if(max_v - min_v <= s)
            {
                gs += (i - left + 1);
            }
        }
    }

    cout << gs << "\n";

    return 0;
}