#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  double a, b, c;
  int cnt = 1;
  cin >> a >> b >> c;
  cout << fixed;
  cout.precision(3);
  while (!(a == 0 && b == 0 && c == 0))
  {
    cout << "Triangle #" << cnt << "\n";
    if (a == -1)
    {
      if (c <= b)
        cout << "Impossible.";
      else
        cout << "a = " << sqrt(c * c - b * b);
    }
    if (b == -1)
    {
      if (c <= a)
        cout << "Impossible.";
      else
        cout << "b = " << sqrt(c * c - a * a);
    }
    if (c == -1)
    {
      cout << "c = " << sqrt(a * a + b * b);
    }
    cout << "\n\n";
    cnt++;
    cin >> a >> b >> c;
  }
}