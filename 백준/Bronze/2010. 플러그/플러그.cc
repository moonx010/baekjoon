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
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    ans += x;
  }
  ans = ans - n + 1;
  cout << ans;
}
