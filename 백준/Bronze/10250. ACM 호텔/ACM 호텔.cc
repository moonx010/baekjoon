#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  for (int p = 0; p < t; p++)
  {
    int h, w, n;
    cin >> h >> w >> n;
    cout << 100 * (((n - 1) % h) + 1) + ((n - 1) / h) + 1 << "\n";
  }

  return 0;
}
