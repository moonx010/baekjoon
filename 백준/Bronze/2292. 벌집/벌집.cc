#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, k = 0;
  cin >> n;
  if (n == 1)
  {
    cout << 1;
    return 0;
  }
  while (!(n > (3 * k * (k - 1) + 1) && n <= (3 * k * (k + 1)) + 1))
  {
    k++;
  }
  cout << k + 1;
}
