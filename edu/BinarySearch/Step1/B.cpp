#include <iostream>
#include <vector>
using namespace std;

int binary_search(vector<int> &v, int item)
{
    int l = 0, r = v.size() - 1;
    int res = 0;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (v[mid] == item)
            return mid+1;
        if (v[mid] > item)
            res = r = mid - 1;
        else
            l = mid + 1;
    }

    return res;
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

    int temp;
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