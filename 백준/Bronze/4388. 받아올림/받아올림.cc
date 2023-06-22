#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  string a, b;
  cin >> a >> b;
  while (!(a.compare("0") == 0 && b.compare("0") == 0))
  {
    int carry = 0, ans = 0;
    for (int i = 0; i < min(a.size(), b.size()) || carry > 0; i++)
    {
      int x = (int)(a.size() - i - 1) >= 0 ? a[a.size() - i - 1] - '0' : 0;
      int y = (int)(b.size() - i - 1) >= 0 ? b[b.size() - i - 1] - '0' : 0;
      carry = (x + y + carry) / 10;
      if (carry)
        ans++;
    }
    cout << ans << "\n";
    cin >> a >> b;
  }
}
