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
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  int m;
  cin >> m;
  for (int i = 0; i < m; i++)
  {
    int k, l, r;
    cin >> k >> l >> r;
    if (k == 1)
    {
      for (int j = l - 1; j < r; j++)
      {
        a[j] = (a[j] * a[j]) % 2010;
      }
    }
    else
    {
      int sum = 0;
      for (int j = l - 1; j < r; j++)
      {
        sum += a[j];
      }
      cout << sum << "\n";
    }
  }
}
