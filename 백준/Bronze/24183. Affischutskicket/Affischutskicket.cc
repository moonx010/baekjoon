#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  double a, b, c;
  cin >> a >> b >> c;
  cout << fixed;
  cout.precision(6);
  cout << a * 0.229 * 0.324 * 2 + b * 0.297 * 0.420 * 2 + c * 0.21 * 0.297;
}
