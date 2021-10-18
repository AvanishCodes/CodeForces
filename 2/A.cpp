#include <vector>
#include <iostream>
#include <map>
using namespace std;

/**
 * @brief Test Case Function
 * 
 */
void solve()
{
    // map<string, pair<int, int>> m;
    map<string, int> m, m2;
    int n;
    cin >> n;
    string s, winner;
    int points = 0, max_points = 0;
    vector<string> v;
    vector<int> v1;
    for (int i = 0; i < n; ++i)
        cin >> s >> points, v.push_back(s), v1.push_back(points), m[v[i]] += v1[i];

    for (int i = 0; i < n; ++i)
        max_points = max(max_points, m[v[i]]);

    // m.clear();

    for (int i = 0; i < n; ++i)
    {
        m2[v[i]] += v1[i];
        if (m2[v[i]] >= max_points && m[v[i]] == max_points)
        {
            winner = v[i];
            break;
        }
    }
    cout << winner << endl;
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
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}