#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  double r;
  cin >> r;
  cout << fixed;
  cout.precision(6);
  cout << M_PI * r * r << "\n";
  cout << r * r * 2;
}
