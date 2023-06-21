#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  if (n == 1)
  {
    cout << 0;
    return 0;
  }
  if (n == 0)
  {
    cout << 1;
    return 0;
  }
  if (n % 2 == 1)
  {
    cout << 4;
  }
  n--;
  while (n > 0)
  {
    cout << 8;
    n -= 2;
  }
}
