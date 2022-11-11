#include <iostream>
#include <vector>
using namespace std;

string binary_search(vector<int> &v, int item)
{
    int l = 0, r = v.size() - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (v[mid] == item)
            return "YES";
        if (v[mid] > item)
            r = mid - 1;
        else
            l = mid + 1;
    }

    return "NO";
}
int main()
{
    // while (true)
    // {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    string temp;
    int item;
    for (int i = 0; i < k; ++i)
    {
        cin >> item;
        temp = binary_search(v, item);
        cout << temp << '\n';
    }
    v.resize(0);
    // }
}