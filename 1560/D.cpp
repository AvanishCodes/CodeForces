#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll LIMITING_VALUE = (ll)2e18;
int t_pointer = 0, s_pointer = 0, taken = 0;

int solve(string s, string power_of_2_number)
{
  t_pointer = 0, s_pointer = 0, taken = 0;
  while (s_pointer < s.length() && t_pointer < power_of_2_number.length())
  {
    if (s[s_pointer] == power_of_2_number[t_pointer])
      taken++, t_pointer++;
    s_pointer++;
  }
  return (int)s.length() - taken + (int)power_of_2_number.length() - taken;
}

vector<string> powers;

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
  for (ll p2 = 1; p2 <= LIMITING_VALUE; p2 *= 2)
    powers.push_back(to_string(p2));
  int tc, ans;
  cin >> tc;
  string n;
  while (tc--)
  {
    cin >> n;
    ans = n.length() + 1;
    for (auto p2 : powers)
      ans = min(ans, solve(n, p2));
    cout << ans << '\n';
  }
  return 0;
}