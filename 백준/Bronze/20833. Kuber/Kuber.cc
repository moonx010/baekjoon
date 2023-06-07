#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  int ans = 0;
  for (int i = 1; i <= n; i++)
  {
    ans += i * i * i;
  }
  cout << ans;
}
