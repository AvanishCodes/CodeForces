#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <cmath>
#include <math.h>
#include <set>
#include <queue>
#include <stack>
#include <bitset>
#include <random>
#include <unordered_map>
#include <unordered_set>
#include <fstream>
#include <iomanip>
#include <numeric>
#include <complex>
#include <assert.h>
#define ll long long int
#define mod 1000000007
#define vi vector<int>
#define vll vector<ll>
#define rep(i, n) for (int i = 0; i < n; i++)
#define read(v, n)            \
  for (int i = 0; i < n; i++) \
    cin >> v[i];
#define print(v, n)           \
  for (int i = 0; i < n; i++) \
    cout << v[i] << " ";
#define pb push_back
#define fr first
#define se second
using namespace std;

void solve()
{
  int n, a, b;
  cin >> n >> a >> b;
  string s;
  cin >> s;
  int cnt = 1;
  for (int i = 1; i < n; i++)
    if (s[i] == s[i - 1])
      continue;
    else
      cnt++;
  // Below is a fixed component for all the test cases
  int ans = n * a;
  // if b is positive, simply add b for each binary character
  if (b >= 0)
    ans += n * b;
  // if b is not positive, then we need to minimize the number of partitions
  // Minimum number of partitions is :
  // partition of nummber forming lesser number of partitions + 1
  else
    ans += ((cnt + 2) / 2) * b;
  cout << ans << "\n";
}
int main()
{
  // fast I/O
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
#ifndef ONLINE_JUDGE
  // For getting input from input.txt file
  freopen("input.txt", "r", stdin);
  // Printing the Output to output.txt file
  freopen("output.txt", "w", stdout);
#endif
  int t = 1;
  cin >> t;
  for (int i = 1; i <= t; i++)
    solve();
  return 0;
}
