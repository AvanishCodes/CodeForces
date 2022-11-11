#include <iostream>
using namespace std;

/**
 * @brief Test Case Function
 * 
 */
void solve()
{
    int x, y, z;
    cin >> x >> y >> z;
    if (x == z)
    {
        if (y > x)
        {
            cout << "NO\n";
            return;
        }
        cout << "YES" << endl;
        if (y == x)
        {
            cout << x << ' ' << x << ' ' << x << endl;
        }
        else
        {
            cout << x << ' ' << y << ' ' << max(1, (y - 1)) << endl;
        }
        return;
    }
    if (y == z)
    {
        if (x > y)
        {
            cout << "NO\n";
            return;
        }
        cout << "YES" << endl;
        if (x == y)
        {
            cout << y << ' ' << y << ' ' << y << endl;
        }
        else
        {
            cout << max(1, (x - 1)) << ' ' << x << ' ' << y << endl;
        }
        return;
    }
    if (x == y)
    {
        if (z > x)
        {
            cout << "NO\n";
            return;
        }
        cout << "YES" << endl;
        cout << x << ' ' << x << ' ' << z << endl;
        return;
    }
    else
    {
        cout << "NO" << endl;
    }
    return;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}