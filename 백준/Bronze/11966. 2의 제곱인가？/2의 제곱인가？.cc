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
  while (1)
  {
    if (n != 1 && n % 2 == 1)
    {
      cout << 0;
      break;
    }
    if (n == 1)
    {
      cout << 1;
      break;
    }

    n = n / 2;
  }
}