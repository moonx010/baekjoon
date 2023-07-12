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
    int x, ans = 0;
    cin >> x;
    for (int j = 0; j < x; j++)
    {
      int k;
      cin >> k;
      ans += k;
    }
    cout << ans << "\n";
  }
}