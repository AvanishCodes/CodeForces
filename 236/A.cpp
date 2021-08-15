#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
  string s;
  cin >> s;
  unordered_set<char> u;
  for (char ch : s)
    u.insert(ch);
  string result = u.size() % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!";

  cout << result;
  return 0;
}