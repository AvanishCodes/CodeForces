#include <iostream>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n / 2;
        return 0;
    }
    // cout << ((int)(n / 2)) + (-n);
    // n -= 1;
    long long unsigned temp = ((n + 1) / 2) * (-1);
    cout << temp;
}