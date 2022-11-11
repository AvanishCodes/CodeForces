#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
  int n, m;
  cin >> n >> m;
  char a[n][m];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
      cin >> a[i][j];
  }
  char b[n][m], c[n][m];
  char p = 'R', q = 'W';
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (j % 2 == 0)
        b[i][j] = p;
      else
        b[i][j] = q;
    }
    swap(p, q);
  }
  p = 'W';
  q = 'R';
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (j % 2 == 0)
        c[i][j] = p;
      else
        c[i][j] = q;
    }
    swap(p, q);
  }
  int f = -1;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (a[i][j] != b[i][j] && a[i][j] != '.')
      {
        f = 1;
        break;
      }
    }
    if (f == 1)
      break;
  }
  if (f == -1)
  {
    cout << "YES" << endl;
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
        cout << b[i][j];
      cout << endl;
    }
    return;
  }
  f = -1;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (a[i][j] != c[i][j] && a[i][j] != '.')
      {
        f = 1;
        break;
      }
    }
    if (f == 1)
      break;
  }
  if (f == -1)
  {
    cout << "YES" << endl;
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
        cout << c[i][j];
      cout << endl;
    }
    return;
  }
  cout << "NO" << endl;
  return;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}