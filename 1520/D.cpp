#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;

/**
 * @brief Test Case Function
 *          a[j] - a[i] = j - i
 *      =>  a[j] - j = a[i] - i
 *          Now, replace a[i] with a[i] - i
 *          The, ans = no. of pairs such that i < j and b[i] = b[j]
 */
void solve()
{
    int n;
    cin >> n;
    map<int, int> m;
    int x;
    long long res = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        x -= i;
        res += m[x];
        m[x]++;
    }
    cout << res << endl;
    return;
}

/**
 * @brief Driver Code
 * 
 * @return int 
 */
int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}