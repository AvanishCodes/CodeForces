#include <bits/stdc++.h>
using namespace std;
int main()
{
  int tc = 1;
  cin >> tc;
  while (tc--)
  {
    // string red = "", white = "";
    int n, m;
    cin >> n >> m;
    char grid[n][m];
    bool flag = false;

    for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++)
        cin >> grid[i][j];
    char ans1[n][m];
    char eo = 'R', ss = 'W';
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        if (j % 2 == 0)
          ans1[i][j] = eo;
        else
          ans1[i][j] = ss;
      }
      swap(eo, ss);
    }
    int f = -1;
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        if (grid[i][j] != ans1[i][j] && grid[i][j] != '.')
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
      cout << "YES\n";
      for (int i = 0; i < n; i++)
      {
        for (int j = 0; j < m; j++)
          cout << ans1[i][j];
        cout << '\n';
      }
      // return;
      continue;
    }
    char ans2[n][m];
    eo = 'W', ss = 'R';
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        if (j % 2 == 0)
          ans2[i][j] = eo;
        else
          ans2[i][j] = ss;
      }
      swap(eo, ss);
    }
    f = -1;
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        if (grid[i][j] != ans2[i][j] && grid[i][j] != '.')
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
      cout << "YES\n";
      for (int i = 0; i < n; i++)
      {
        for (int j = 0; j < m; j++)
          cout << ans2[i][j];
        cout << '\n';
      }
      continue;
    }
    cout << "NO\n";
  }
}