#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  for (int i = 1; i <= t; i++)
  {
    int n;
    double min_x = 1000, max_x = -1000, min_y = 1000, max_y = -1000;
    cin >> n;
    for (int j = 0; j < n; j++)
    {
      double x, y;
      cin >> x >> y;
      if (x > max_x)
        max_x = x;
      if (x < min_x)
        min_x = x;
      if (y > max_y)
        max_y = y;
      if (y < min_y)
        min_y = y;
    }
    cout << fixed;
    cout.precision(10);
    cout << "Case " << i << ": Area " << (max_x - min_x) * (max_y - min_y) << ", Perimeter " << 2 * (max_x - min_x + max_y - min_y) << "\n";
  }
}