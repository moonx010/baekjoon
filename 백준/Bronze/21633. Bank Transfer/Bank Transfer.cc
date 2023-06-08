#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  double k;
  cin >> k;
  double x = k * 0.01 + 25;
  if (x > 2000)
    x = 2000;
  if (x < 100)
    x = 100;
  cout << fixed;
  cout.precision(2);
  cout << x;
}
