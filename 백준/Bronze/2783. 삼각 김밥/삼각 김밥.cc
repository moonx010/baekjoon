#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  double x, y, m;
  cin >> x >> y;
  m = (1000 / y) * x;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    double a, b, t;
    cin >> a >> b;
    t = (1000 / b) * a;
    if (t < m)
      m = t;
  }
  cout << fixed;
  cout.precision(2);
  cout << m;
}
