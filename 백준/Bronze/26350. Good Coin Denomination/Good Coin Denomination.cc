#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, ans = 0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    int a[x];
    cout << "Denominations: ";
    bool chk = false;
    for (int j = 0; j < x; j++)
    {
      cin >> a[j];
      if (j > 0)
      {
        if (a[j] < 2 * a[j - 1])
          chk = true;
      }
      cout << a[j] << " ";
    }
    cout << "\n";
    if (chk)
      cout << "Bad coin denominations!\n\n";
    else
      cout << "Good coin denominations!\n\n";
  }
}
