#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  double n;
  cin >> n;
  while (n > 0)
  {
    double sum = 0, x = 2;
    while (sum < n)
    {
      sum += 1 / x;
      x++;
    }
    cout << x - 2 << " card(s)\n";
    cin >> n;
  }
}
