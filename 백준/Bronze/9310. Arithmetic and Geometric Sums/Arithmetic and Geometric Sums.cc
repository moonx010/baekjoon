#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  long long n;
  cin >> n;
  while (n != 0)
  {
    long long a, b, c;
    cin >> a >> b >> c;
    if (b - a == c - b)
    {
      long long d = b - a;
      cout << (long long int)(n * (2 * a + (n - 1) * d) / 2) << "\n";
    }
    else
    {
      long long r = b / a;
      cout << (long long int)(a * (pow(r, n) - 1) / (r - 1)) << "\n";
    }
    cin >> n;
  }
}