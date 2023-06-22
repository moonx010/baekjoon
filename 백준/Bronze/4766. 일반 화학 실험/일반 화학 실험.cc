#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  double t;
  cin >> t;
  cout << fixed;
  cout.precision(2);
  while (t != 999)
  {
    double cur;
    cin >> cur;
    if (cur == 999)
      break;
    cout << cur - t << "\n";
    t = cur;
  }
}
