#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  int n, cnt = 1;
  cin >> n;
  while (n != 0)
  {
    n = 3 * n;
    cout << cnt << ". ";
    if (n % 2 == 0)
    {
      cout << "even ";
      n = n / 2;
    }
    else
    {
      cout << "odd ";
      n = (n + 1) / 2;
    }
    n = n * 3 / 9;
    cout << n << "\n";
    cnt++;
    cin >> n;
  }
}