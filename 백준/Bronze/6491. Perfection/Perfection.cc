#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  while (n != 0)
  {
    int chk = 0;
    for (int i = 1; i < n; i++)
    {
      if (n % i == 0)
        chk += i;
    }
    cout << n << " ";
    if (chk == n)
      cout << "PERFECT\n";
    else if (chk > n)
      cout << "ABUNDANT\n";
    else
      cout << "DEFICIENT\n";
    cin >> n;
  }
}