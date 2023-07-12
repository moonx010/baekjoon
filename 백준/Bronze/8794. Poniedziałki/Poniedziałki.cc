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
    int a, b, c, ans = 0;
    cin >> a >> b >> c;
    int cur = c - 1;
    for (int j = 0; j < a; j++)
    {
      if (cur == 0)
        ans++;
      cur = (cur + 1) % b;
    }
    cout << ans << "\n";
  }
}