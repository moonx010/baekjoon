#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  long long int a, b, c, d;
  while (cin >> a >> b >> c >> d)
  {
    long long int ans = ((a * (a - 1) / 2) * b - d) / c;
    if (ans == 0)
      cout << a << "\n";
    else
      cout << ans << "\n";
  }
}