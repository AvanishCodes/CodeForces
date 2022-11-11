#include <iostream>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    int n;
    while (tc--)
    {
        cin >> n;
        int temp = n / 1000, p1 = 0, p2 = 0;
        while (temp > 0)
        {
            p1 += temp % 10;
            temp /= 10;
        }
        temp = n % 1000;
        while (temp > 0)
        {
            p2 += temp % 10;
            temp /= 10;
        }

        if (p1 == p2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}