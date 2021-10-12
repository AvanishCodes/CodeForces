#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    map<string, int> s;
    string str;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        // Check if s contains str
        if (s.find(str) == s.end())
        {
            s.insert({str, 1});
            cout << "OK\n";
            continue;
        }
        else
        {
            cout << str << s[str] << endl;
            s[str]++;
            continue;
        }
    }
}