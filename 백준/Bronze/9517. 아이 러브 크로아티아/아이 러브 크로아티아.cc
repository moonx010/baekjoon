#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int cur, n, time = 0, ans = -1;
  cin >> cur >> n;
  cur--;
  for (int i = 0; i < n; i++)
  {
    int t;
    char result;
    cin >> t >> result;
    time += t;
    if (time >= 210)
    {
      if (ans < 0)
        ans = cur + 1;
    }
    if (result == 'T')
      cur = (cur + 1) % 8;
  }
  cout << ans;

  return 0;
}