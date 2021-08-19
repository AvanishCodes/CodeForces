#include <iostream>
using namespace std;
#define fn for (int i = 0; i < n; i++)
#define endl '\n'

int fixedi[] = {1, 2, 4, 5, 7, 8, 10, 11, 14, 16, 17, 19, 20, 22, 25, 26, 28, 29};
int n;

// Test Case Function
void testCase()
{
  cin >> n;
  int ans = fixedi[n % 18 == 0 ? 17 : n % 18 - 1];
  ans += (((int)((n - 1) / 18)) * 30);
  cout << ans << endl;
  return;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
  int tc;
  cin >> tc;
  while (tc--)
    testCase();
}