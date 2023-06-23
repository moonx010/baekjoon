#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  double a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;
  while (!(a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0))
  {
    double M = max(a, max(b, max(c, max(d, max(e, f))))), m = min(a, min(b, min(c, min(d, min(e, f)))));
    double ans = (a + b + c + d + e + f - M - m) / 4;
    cout << ans << "\n";
    cin >> a >> b >> c >> d >> e >> f;
  }
}