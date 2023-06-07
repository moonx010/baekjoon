#include <iostream>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int a, x, b, y, n;
  cin >> a >> x >> b >> y >> n;
  cout << (max(0, n - 30) * x) * 21 + a << " " << (max(0, n - 45) * y) * 21 + b;
}
