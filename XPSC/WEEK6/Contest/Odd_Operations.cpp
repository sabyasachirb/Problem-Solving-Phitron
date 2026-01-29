#include <bits/stdc++.h>
using namespace std;
bool has_odd(int n)
{
    while(n > 0)
    {
        int digit = n % 10;
        if(digit % 2 != 0)
        {
            return true;
        }
        n /= 10;
    }
    return false;
}
set<int> get_digits(int n)
{
    set<int> digits;
    while(n > 0)
    {
        digits.insert(n % 10);
        n /= 10;
    }
    return digits;
}

int solve(int n)
{
    if(n%2 != 0)
    {
        return 0;
    }
    if(has_odd(n))
    {
        return 1;
    }
    if(n<10) return -1;
    set<int> digits = get_digits(n);
    for(int d : digits)
    {
        if(d == 0) continue;
        if(has_odd(n-d))
        {
            return 2;
        }
    }
    return 3;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout<< solve(n) << "\n";
    }
    return 0;
}