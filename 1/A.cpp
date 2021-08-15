#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  long long unsigned a, b, c;
  cin >> a >> b >> c;
  cout << ((a + c - 1) / c) * ((b + c - 1) / c);
  return 0;
}