#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long unsigned n;
    cin >> n;
    vector<long long unsigned> v(45);
    // Create the fibonacci vector
    v[0] = 0;
    v[1] = 1;
    for (long long unsigned i = 2; i <= 44; i++)
        v[i] = v[i - 1] + v[i - 2];
    // Print the fibonacci numbers
    cout << accumulate(v.begin() + 1, v.begin() + (n + 1), 0) << endl;
    return 0;
}