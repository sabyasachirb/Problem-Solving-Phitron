#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    deque<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int sr = 0;
    int dm = 0;
    for (int i = 0; i < n; i++)
    {
        if(i%2 == 0)
        {
            sr += max(a.front(), a.back());
            if(a.front() > a.back())
                a.pop_front();
            else
                a.pop_back();
        }
        else
        {
            dm += max(a.front(), a.back());
            if(a.front() > a.back())
                a.pop_front();
            else
                a.pop_back();
        }
    }
    cout  << sr << " " << dm << "\n";
    return 0;
}