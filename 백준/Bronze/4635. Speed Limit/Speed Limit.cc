#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  while (n > 0)
  {
    int cur = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
      int a, b;
      cin >> a >> b;
      ans += a * (b - cur);
      cur = b;
    }
    cout << ans << " miles\n";
    cin >> n;
  }
}
