#include <iostream>
using namespace std;
int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int res = (k * (w * (w + 1))) / 2 - n;
    cout << (res > 0 ? res : 0);
    return 0;
}