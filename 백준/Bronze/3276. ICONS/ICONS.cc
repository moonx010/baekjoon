#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, a = 1, b = 1;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    if (a * b < i)
    {
      if (a <= b)
        a++;
      else
        b++;
    }
  }
  cout << a << " " << b;
}
