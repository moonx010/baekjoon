#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  for (int a = 100; a < 1000; a++)
  {
    for (int b = a + 1; b < 1000; b++)
    {
      if (a % 10 == b / 100)
      {
        if (a * (b % 100) == b * (a / 10))
          cout << a << " / " << b << " = " << (a / 10) << " / " << (b % 100) << "\n";
      }
    }
  }
}