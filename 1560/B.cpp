#include <iostream>
using namespace std;

int a, b, c, low, high, n;
int testCase()
{
  cin >> a >> b >> c;
  low = min(a, b);
  high = max(a, b);
  // cout << "high: " << high << " low: " << low << endl;
  int idealDifference = high - low;
  n = 2 * (idealDifference);
  int res = n;
  // cout << low << high << res << endl;
  if (c > n)
    return -1;
  if (idealDifference < low)
    return -1;
  if ((c + idealDifference) > n)
    return (c + idealDifference) % n;
  return c + idealDifference;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int tc;
  cin >> tc;
  while (tc--)
    cout << testCase() << endl;
  return 0;
}