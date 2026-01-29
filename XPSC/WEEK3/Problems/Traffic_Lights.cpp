#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, x;
    cin >> n >> x;
    set<int> lights;
    multiset<int> distance;
    lights.insert(0);
    lights.insert(n);
    distance.insert(n);
    while(x--)
    {
        int p;
        cin >> p;
        auto it = lights.upper_bound(p);
        int right = *it;
        --it;
        int left = *it;
        lights.insert(p);
        distance.erase(distance.find(right - left));
        distance.insert(p - left);
        distance.insert(right - p);
        cout << *distance.rbegin() << " ";
        

    }
    return 0;
}