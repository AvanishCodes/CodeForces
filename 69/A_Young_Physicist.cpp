#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define N 3

int main()
{

    int n;
    cin >> n;
    // vector<vector<int>> v(n, vector<int>(3));
    vector<int> res(3);
    int e;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < N; ++j)
        {
            cin >> e;
            res[j] += e;
        }
    if (all_of(res.begin(), res.end(), [](int x)
               { return x == 0; }))
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}