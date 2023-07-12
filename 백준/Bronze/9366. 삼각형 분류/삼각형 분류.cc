#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    int a, b, c;
    cin >> a >> b >> c;
    cout << "Case #" << i << ": ";
    if (2 * max(a, max(b, c)) >= a + b + c)
      cout << "invalid!\n";
    else if (a == b && b == c)
      cout << "equilateral\n";
    else if (a == b || b == c || c == a)
      cout << "isosceles\n";
    else
      cout << "scalene\n";
  }
}