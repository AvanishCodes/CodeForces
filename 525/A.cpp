#include <iostream>
#include <map>
using namespace std;

void solve()
{
    long long unsigned n;
    cin >> n;
    map<long long unsigned, long long unsigned> mp;
    long long unsigned x, res = 0;
    for (long long unsigned i = 0; i < n; ++i)
    {
        cin >> x;
        x -= i;
        res += mp[x];
        mp[x]++;
    }
    cout << res << endl;
    return;
}

int main()
{
    long long unsigned tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}