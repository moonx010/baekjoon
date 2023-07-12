#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  cout << fixed;
  cout.precision(6);
  for (int i = 0; i < n; i++)
  {
    int x;
    double l, a, b, s;
    cin >> x >> l >> a >> b >> s;
    cout << x << " " << (l / (a + b)) * s << "\n";
  }
}