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
    int k, d, ans = 0;
    cin >> k >> d;
    for (int j = 0; j < k; j++)
    {
      int v, f, c;
      cin >> v >> f >> c;
      if (d * c <= v * f)
        ans++;
    }
    cout << ans << "\n";
  }

  return 0;
}