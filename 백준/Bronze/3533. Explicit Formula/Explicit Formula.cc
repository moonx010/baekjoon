#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  bool a[10];
  for (int i = 0; i < 10; i++)
    cin >> a[i];

  bool ans = 0;
  for (int i = 0; i < 10; i++)
  {
    for (int j = i + 1; j < 10; j++)
    {
      ans ^= (a[i] || a[j]);
      for (int k = j + 1; k < 10; k++)
        ans ^= (a[i] || a[j] || a[k]);
    }
  }

  cout << ans << "\n";

  return 0;
}
