#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, ans = 0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    double a, b, c, w;
    cin >> a >> b >> c >> w;
    if (((a <= 56 && b <= 45 && c <= 25) || (a + b + c <= 125)) && w <= 7)
    {
      cout << 1;
      ans++;
    }
    else
      cout << 0;
    cout << "\n";
  }
  cout << ans;
}