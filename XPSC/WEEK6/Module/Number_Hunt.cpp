#include <bits/stdc++.h>
using namespace std;

bool if_prime(int n)
{
    if(n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        int count = 0;
        long long first_prime = -1;
        long long second_prime = -1;
        while(count <= 2)
        {
            if(if_prime(n))
            {
                if(count == 0)
                    first_prime = n;
                else if(count == 1)
                    second_prime = n;
                count++;
            }
            n++;
        }
        cout << 1LL*first_prime*second_prime << "\n";
    }
    return 0;
}