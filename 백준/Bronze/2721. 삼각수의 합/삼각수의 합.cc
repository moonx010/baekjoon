#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  for (int p = 0; p < t; p++)
  {
    int n, sum = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
      sum += i * (i + 1) * (i + 2) / 2;
    }
    cout << sum << "\n";
  }

  return 0;
}
