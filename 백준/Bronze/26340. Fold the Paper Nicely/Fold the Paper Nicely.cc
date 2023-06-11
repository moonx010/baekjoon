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
    int a, b, c;
    cin >> a >> b >> c;
    cout << "Data set: " << a << " " << b << " " << c << "\n";
    int l = max(a, b), s = min(a, b);
    for (int j = 0; j < c; j++)
    {
      int new_l = l / 2;
      l = max(new_l, s);
      s = min(new_l, s);
    }
    cout << l << " " << s << "\n\n";
  }
}
