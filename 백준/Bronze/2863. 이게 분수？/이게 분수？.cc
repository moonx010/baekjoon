#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  double a, b, c, d, m = 0, ans = 0;
  cin >> a >> b >> c >> d;
  for (int i = 0; i < 4; i++)
  {
    double x = a / c + b / d;
    double t = a, p = b, q = d;
    a = c;
    b = t;
    d = p;
    c = q;
    if (x > m)
    {
      m = x;
      ans = i;
    }
  }
  cout << ans;
}
