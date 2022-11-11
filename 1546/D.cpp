#include <bits/stdc++.h>
using namespace std;
#define fn for (int i = 0; i < n; i++)
int main()
{
  int tc;
  cin >> tc;
  while (tc--)
  {
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> a(n);
    fn cin >> a[i];
    int count = 0;
    sort(a.begin(), a.end());
    fn cout << a[i];
    cout << '\n';
    for (int i = 0; a[i] < l; i++)
    {
      if (a[i] + a[n - 1] >= l)
      {
        vector<int>::iterator current = a.begin() + i;
        int leftdiff = l - a[i];
        vector<int>::iterator lower = upper_bound(current + 1, a.end(), leftdiff);
        int leftindex = lower - a.begin();
        int rightdiff = r - a[i] - 1;
        vector<int>::iterator upper = lower_bound(lower, a.end(), rightdiff);
        int rightindex = upper - a.begin();
        cout << i << ' ' << leftindex << ' ' << rightindex << '\n';
        count += (rightindex - leftindex + 1);
      }
      else
      {
        continue;
      }
    }
    cout << count;
  }
}