// Below is C/C++ code for input/output
#include <bits/stdc++.h>
using namespace std;

#define read(type) readInt<type>()           // read an Integer fastly
#define write(type) writeInt<type>()         // Write an integer fastly
#define SCD(t) scanf("%d", &t)               // Scan a decimal Number
#define SCLD(t) scanf("%ld", &t)             // Scan a long decimal Number
#define SCLLD(t) scanf("%lld", &t)           // Scan a long long decimal Number
#define SCC(t) scanf("%c", &t)               // Scan a character
#define SCS(t) scanf("%s", t)                // Scan a string
#define SCF(t) scanf("%f", &t)               // Scan a floating point number
#define SCLF(t) scanf("%lf", &t)             // Scan a long floating point number
#define MP make_pair                         // Make pair
#define PB push_back                         // Push back to a container
#define EB emplace_back                      // Emplace back to a container(faster and more efficient method)
#define INF (int)1e9                         // Works as infinite for integers
#define PI 3.1415926535897932384626433832795 // Decimal value of PI
#define MOD 1000000007                       // Modulo value for most of the mathematical problems
#define mod MOD                              // So that modulo value works in either case
#define F first                              // First Element of a pair
#define S second                             // Second Element of a pair
typedef pair<int, int> PII;                  // Pair of integer and integer
typedef vector<int> VI;                      // Vector of Integers
typedef vector<string> VS;                   // Vector of Strings
typedef vector<PII> VII;                     // Vector of pairs of Integer and Integer
typedef vector<VI> VVI;                      // Vector of Vectors of Integers
typedef map<int, int> MPII;                  // Map of Integers and Integers
typedef set<int> SETI;                       // set of Integers
#define fn for (int i = 0; i < n; i++)

/* Inline functions */
// Check if a number is even
inline bool isEven(int a)
{
  if (a & 1)
    return false;
  return true;
}
// Check if the number is odd
inline bool isOdd(int a)
{
  if (a & 1)
    return true;
  return false;
}
// Get the most significant digit of a decimal number
inline int MSD(int N)
{
  return floor(log10(N));
}
// Check if the number is a power of 2
inline bool isPowerOf2(int N)
{
  return N && (!(N & (N - 1)));
}
/* End of Inline Functions */

template <typename T>
inline void writeInt(T x) // Write an integer on console
{
  int i = 20;
  char buf[21];
  // buf[10] = 0;
  buf[20] = '\n';
  do
  {
    buf[--i] = x % 10 + '0';
    x /= 10;
  } while (x);
  do
  {
    putchar(buf[i]);
  } while (buf[i++] != '\n');
}

template <typename T>
inline T readInt() // Read an Integer
{
  T n = 0, s = 1;
  char p = getchar();
  if (p == '-')
    s = -1;
  while ((p < '0' || p > '9') && p != EOF && p != '-')
    p = getchar();
  if (p == '-')
    s = -1, p = getchar();
  while (p >= '0' && p <= '9')
  {
    n = (n << 3) + (n << 1) + (p - '0');
    p = getchar();
  }
  return n * s;
}

// Test Case function
void testCase()
{
  // int n = read(int);
  int n;
  cin >> n;
  // cout << x;
  VI a(n), b(n);
  // fn a[i] = read(int);
  // fn b[i] = read(int);
  fn cin >> a[i];
  fn cin >> b[i];
  VII pos, neg;
  int difference = 0;
  if (accumulate(a.begin(), a.end(), 0) != accumulate(b.begin(), b.end(), 0))
  {
    cout << "-1\n";
    return;
  }
  bool status = true;
  fn
  {
    difference += abs(a[i] - b[i]);
    if (a[i] > b[i])
      pos.PB(MP(i + 1, abs(a[i] - b[i])));
    else if (a[i] < b[i])
      neg.PB(MP(i + 1, abs(a[i] - b[i])));
    if (status)
      if (a[i] != b[i])
        status = false;
  }
  // cout << '\n';
  // for (auto it : pos)
  //   cout << it.F << ' ' << it.S << '\n';
  // cout << '\n';
  // for (auto it : neg)
  //   cout << it.F << ' ' << it.S << '\n';
  if (status)
  {
    cout << "0\n";
    return;
  }
  difference /= 2;
  cout << difference << '\n';
  if (difference > 0)
  {
    int negIndex = 0, posIndex = 0;
    int currentPositive = pos[posIndex].F;
    int currentNegative = neg[negIndex].F;
    // cout << currentPositive << ' ' << currentNegative << '\n';
    while (difference--)
    {
      if (pos[posIndex].S < 1)
      {
        posIndex += 1;
        cout << pos[posIndex].F << ' ';
        pos[posIndex].S -= 1;
      }
      else
      {
        pos[posIndex].S -= 1;
        cout << pos[posIndex].F << ' ';
      }
      if (neg[negIndex].S < 1)
      {
        negIndex += 1;
        cout << neg[negIndex].F << '\n';
        neg[negIndex].S -= 1;
      }
      else
      {
        neg[negIndex].S -= 1;
        cout << neg[negIndex].F << '\n';
      }
    }
  }
  // cout << " Build Successfull\n";
  return;
}

// Code entry
int main()
{
  // fast I/O
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
#ifndef ONLINE_JUDGE
  // For getting input from input.txt file
  freopen("input.txt", "r", stdin);
  // Printing the Output to output.txt file
  freopen("output.txt", "w", stdout);
#else
  // online submission
#endif
  int tc = 1; // For number of test cases
  cin >> tc;  // Hide this line if there is only one test case
  // tc = read(int);
  while (tc--) // For each test case
    testCase();
  return 0;
}