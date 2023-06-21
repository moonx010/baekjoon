#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  while (!(a == 0 && b == 0 && c == 0 && d == 0))
  {
    int cnt = 0;
    while (!(a == b && b == c && c == d))
    {
      int new_a = abs(a - b);
      int new_b = abs(b - c);
      int new_c = abs(c - d);
      int new_d = abs(d - a);
      a = new_a;
      b = new_b;
      c = new_c;
      d = new_d;
      cnt++;
    }
    cout << cnt << "\n";
    cin >> a >> b >> c >> d;
  }
}
