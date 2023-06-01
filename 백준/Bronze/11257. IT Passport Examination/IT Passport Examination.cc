#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int x, a, b, c;
    cin >> x >> a >> b >> c;
    cout << x << " " << a + b + c << " ";
    if (a + b + c < 55)
      cout << "FAIL";
    else
    {
      if (a * 100 < 35 * 30)
        cout << "FAIL";
      else if (b * 100 < 25 * 30)
        cout << "FAIL";
      else if (c * 100 < 40 * 30)
        cout << "FAIL";
      else
        cout << "PASS";
    }
    cout << "\n";
  }
}