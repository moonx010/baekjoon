#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  double a;
  cin >> a;
  cout << fixed;
  cout.precision(6);
  cout << 4 * sqrt(a);
}
