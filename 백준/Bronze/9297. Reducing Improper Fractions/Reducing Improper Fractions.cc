#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    int a, b;
    cin >> a >> b;
    cout << "Case " << i + 1 << ": ";
    if (a / b > 0)
      cout << a / b << " ";
    if (a % b > 0)
      cout << a % b << "/" << b;
    if (a / b == 0 && a % b == 0)
      cout << 0;
    cout << "\n";
  }
}