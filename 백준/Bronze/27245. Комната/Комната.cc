#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int a, b, c;
  cin >> a >> b >> c;
  int M = max(a, b), m = min(a, b);
  if (M <= 2 * m && m >= 2 * c)
    cout << "good";
  else
    cout << "bad";
}
