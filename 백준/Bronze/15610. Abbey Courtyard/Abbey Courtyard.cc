#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  double n;
  cin >> n;
  cout << fixed;
  cout.precision(6);
  cout << sqrt(n) * 4;
}
