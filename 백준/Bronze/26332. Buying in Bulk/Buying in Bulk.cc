#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, ans = 0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int a, b;
    cin >> a >> b;
    cout << a << " " << b << "\n";
    int ans = max(0, a - 1) * (b - 2) + b;
    cout << ans << "\n";
  }
}
