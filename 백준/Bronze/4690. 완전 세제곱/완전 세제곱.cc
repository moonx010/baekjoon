#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  for (int i = 1; i <= 100; i++)
  {
    for (int a = 2; a < i; a++)
    {
      for (int b = a; b < i; b++)
      {
        for (int c = b; c < i; c++)
        {
          if (pow(i, 3) == pow(a, 3) + pow(b, 3) + pow(c, 3))
            cout << "Cube = " << i << ", Triple = (" << a << "," << b << "," << c << ")\n";
        }
      }
    }
  }
}
