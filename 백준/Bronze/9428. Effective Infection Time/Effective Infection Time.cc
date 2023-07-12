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

  for (int i = 0; i < n; i++)
  {
    int im, iy, sm, sy;
    cin >> im >> iy >> sm >> sy;

    double eit = 0;
    if (iy == sy)
      eit += 0.5 * (sm - im) / (12.0 - im + 1);
    else
      eit += 0.5 + (sy - iy - 1) + (sm - 1) / 12.0;

    cout << fixed;
    cout.precision(4);
    cout << eit << "\n";
  }

  return 0;
}