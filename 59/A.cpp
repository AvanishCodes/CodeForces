#include <iostream>
#include <algorithm>
#include <algorithm>
using namespace std;
int main()
{
  string s;
  cin >> s;
  int cap = 0, small = 0;
  for (char ch : s)
    if (ch < 91)
      cap++;
    else
      small++;
  if (cap > small)
    transform(s.begin(), s.end(), s.begin(), ::toupper);
  else
    transform(s.begin(), s.end(), s.begin(), ::tolower);
  cout << s;
  return 0;
}