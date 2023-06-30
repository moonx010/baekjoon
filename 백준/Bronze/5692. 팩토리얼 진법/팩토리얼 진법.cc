#include <iostream>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  while (n != 0)
  {
    int ans = 0, x = 1, cnt = 1;
    while (n != 0)
    {
      ans += x * (n % 10);
      n = n / 10;
      cnt++;
      x *= cnt;
    }
    cout << ans << "\n";
    cin >> n;
  }
}