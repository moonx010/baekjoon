#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int b, n;
  cin >> b >> n;
  while (!(b == 0 && n == 0))
  {
    int a;
    for (a = 0; pow(a, n) <= b; a++)
    {
    }
    int a2 = a - 1;
    if (abs(pow(a2, n) - b) > abs(pow(a, n) - b))
      cout << a;
    else
      cout << a2;
    cout << "\n";
    cin >> b >> n;
  }
}
