#include <bits/stdc++.h>
using namespace std;
void build(int ind, int low, int high, vector<int> &arr, vector<int> &seg, bool orr)
{
    if (low == high)
    {
        seg[ind] = arr[low];
        return;
    }
    int mid = (low + high) / 2;
    build(2 * ind + 1, low, mid, arr, seg, !orr);
    build(2 * ind + 2, mid + 1, high, arr, seg, !orr);
    if (orr)
        seg[ind] = seg[2 * ind + 1] | seg[2 * ind + 2];
    else
        seg[ind] = seg[2 * ind + 1] ^ seg[2 * ind + 2];
}

void update(int ind, int i, int val, int low, int high, vector<int> &arr, vector<int> &seg, bool orr)
{
    if (low == high)
    {
        seg[ind] = val;
        return;
    }
    int mid = (low + high) / 2;
    if (i <= mid)
        update(2 * ind + 1, i, val, low, mid, arr, seg, !orr);
    else
        update(2 * ind + 2, i, val, mid + 1, high, arr, seg, !orr);
    if (orr)
        seg[ind] = seg[2 * ind + 1] | seg[2 * ind + 2];
    else
        seg[ind] = seg[2 * ind + 1] ^ seg[2 * ind + 2];
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, m;
    cin >> n >> m;
    vector<int> a(pow(2, n)), seg(4 * pow(2, n));
    for (int &e : a)
        cin >> e;
    if (n % 2 == 0)
        build(0, 0, pow(2, n) - 1, a, seg, 0);
    else
        build(0, 0, pow(2, n) - 1, a, seg, 1);
    int ind, val;
    while (m--)
    {
        cin >> ind >> val;
        if (n % 2 == 0)
            update(0, ind - 1, val, 0, pow(2, n) - 1, a, seg, 0);
        else
            update(0, ind - 1, val, 0, pow(2, n) - 1, a, seg, 1);
        cout << seg[0] << endl;
    }
    return 0;
}