#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, min = INT32_MAX;
  string s, ans;
  while (cin >> s)
  {
    cin >> n;
    if (n < min)
    {
      ans = s;
      min = n;
    }
  }
  cout << ans;
}