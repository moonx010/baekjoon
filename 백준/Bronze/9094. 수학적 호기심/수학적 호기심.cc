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
  for (int i = 0; i < t; i++)
  {
    int n, m, ans = 0;
    cin >> n >> m;
    for (int b = 2; b < n; b++)
    {
      for (int a = 1; a < b; a++)
      {
        if ((a * a + b * b + m) % (a * b) == 0)
          ans++;
      }
    }
    cout << ans << "\n";
  }
}