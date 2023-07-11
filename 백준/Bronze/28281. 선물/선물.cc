#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, x, ans = INT32_MAX;
  cin >> n >> x;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < n - 1; i++)
  {
    int t = (a[i] + a[i + 1]) * x;
    if (t < ans)
      ans = t;
  }
  cout << ans;
}