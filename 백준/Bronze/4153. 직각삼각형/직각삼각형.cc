#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int a, b, c;
  cin >> a >> b >> c;
  while (!(a == 0 && b == 0 && c == 0))
  {
    int m = max(a, max(b, c));
    if (2 * m * m == a * a + b * b + c * c)
      cout << "right\n";
    else
      cout << "wrong\n";
    cin >> a >> b >> c;
  }
}
