#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int open;
    int close;
    int full;
    Node(int _open, int _close, int _full)
    {
        open = _open;
        close = _close;
        full = _full;
    }
};
void build(int ind, int low, int high, string &s, vector<Node *> &seg)
{
    if (low == high)
    {
        seg[ind] = new Node(s[low] == '(', s[low] == ')', 0);
        return;
    }
    int mid = (low + high) / 2;
    build(2 * ind + 1, low, mid, s, seg);
    build(2 * ind + 2, mid + 1, high, s, seg);
    int minm = min(seg[2 * ind + 1]->open, seg[2 * ind + 2]->close);
    seg[ind] = new Node(0, 0, 0);
    seg[ind]->full = seg[2 * ind + 1]->full + seg[2 * ind + 2]->full + minm;
    seg[ind]->open = seg[2 * ind + 1]->open + seg[2 * ind + 2]->open - minm;
    seg[ind]->close = seg[2 * ind + 1]->close + seg[2 * ind + 2]->close - minm;
}

Node query(int ind, int low, int high, int qlow, int qhigh, vector<Node *> &seg)
{
    if (qlow > high || qhigh < low)
        return Node(0, 0, 0);
    if (qlow <= low && qhigh >= high)
        return *seg[ind];
    int mid = (low + high) / 2;
    Node left = query(2 * ind + 1, low, mid, qlow, qhigh, seg);
    Node right = query(2 * ind + 2, mid + 1, high, qlow, qhigh, seg);
    int minm = min(left.open, right.close);
    return Node(left.open + right.open - minm, left.close + right.close - minm, left.full + right.full + minm);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s;
    cin >> s;
    int n = s.length();
    vector<Node *> seg(4 * n, new Node(0, 0, 0));
    build(0, 0, n - 1, s, seg);
    int q;
    cin >> q;
    int l, r;
    while (q--)
    {
        cin >> l >> r;
        --l;
        --r;
        cout << 2 * query(0, 0, n - 1, l, r, seg).full << endl;
    }

    return 0;
}