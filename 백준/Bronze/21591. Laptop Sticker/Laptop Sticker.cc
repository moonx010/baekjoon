#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if(c <= a - 2 && d <= b - 2) cout << 1;
  else cout << 0;
}
