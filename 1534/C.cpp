#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define mod 1000000007
#define fn for (int i = 0; i < n; i++)
int main()
{
  int tc;
  cin >> tc;
  while (tc--)
  {
    int n;
    cin >> n;
    int a[n];
    int b[n], ba[n + 1];
    fn cin >> a[i];
    fn cin >> b[i];
    fn ba[b[i]] = i;
    int c[n] = {0};
    int count = 0;
    fn
    {
      if (c[i] == 1)
        continue;
      int x = i, y = -1;
      while (b[i] != y)
        c[x] = 1,
        x = ba[a[x]],
        c[x] = 1,
        y = a[x],
        x = ba[y];
      count++;
    }
    int res = 1;
    for (int i = 0; i < count; i++)
      res = ((res % mod) * 2) % mod;
    if (res < 0)
      res += mod;
    cout << res << endl;
  }
  return 0;
}