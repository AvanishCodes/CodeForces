#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int res = 0;
    int c, u;
    vector<int> temp(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> u >> c;
        if (i > 0)
            temp[i] = temp[i - 1] - u + c;
        else
            temp[i] = c;
    }
    for (auto &e : temp)
        res = max(res, e);
    cout << res;
}