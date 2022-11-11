#include <iostream>
#include <math.h>
using namespace std;

long long unsigned int n, r, c;
long long unsigned int row, col;
void testCase()
{
  cin >> n;
  if (n == 1)
  {
    cout << "1 1\n";
    return;
  }
  if (n < 4)
  {
    cout << n - 1 << " 2\n";
    return;
  }
  row = 0, col = 0;
  long long unsigned int r = floor(sqrt(n));
  long long unsigned int prospect = r * r;
  // cout << "r: " << r << " prospect: " << prospect << endl;

  long long unsigned int mg = prospect + 2 * r + 2;
  mg = (mg + prospect) / 2;
  // cout << "Middle Ground :" << mg << endl;

  // for all case, n >= prospect
  if (prospect == n)
    col = r, row = 1;
  else if (n <= mg)
    row = r + 1, col = n - prospect;
  else
    col = r + 1, row = prospect + 2 * r + 2 - n;
  cout << col << ' ' << row << endl;
  return;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  long long unsigned int tc;
  cin >> tc;
  while (tc--)
    testCase();
  return 0;
}