#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int a, b;
  cin >> a >> b;
  int ans = 50 * a - 10 * b;
  if (a > b)
    ans += 500;
  cout << ans;

  return 0;
}