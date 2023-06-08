#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int a;
  cin >> a;
  int p = 5 * a - 400;
  cout << p << "\n";
  if (p > 100)
    cout << -1;
  else if (p < 100)
    cout << 1;
  else
    cout << 0;
}
