#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  string s;
  cin >> s;
  bool chk = false;
  int ans = 0;
  for (int i = s.size() - 1; i >= 0; i--)
  {
    if (!chk && s[i] != '0')
      chk = true;
    if (chk && s[i] == '0')
      ans++;
  }
  cout << ans;
}
