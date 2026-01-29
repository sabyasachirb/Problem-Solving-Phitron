#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ios ios::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define nl "\n"
#define all for(int i=0;i<n;i++)
//current mode is for set
//for multiset---> use (less_equal)

vector<int> generatePrimes(int n)
{
    vector<int> primes;
    int num = 2;
    while(primes.size() < n)
    {
        bool isPrime = true;
        for(int i = 2; i * i <= num; i++)
        {
            if(num % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        if(isPrime) primes.push_back(num);
        num++;
    }
    return primes;
}
void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> primes = generatePrimes(n);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << primes[i] + j;
            if(j < m - 1) cout << " ";
        }
        cout << "\n";
    }
}

int main()
{
    ios;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}


