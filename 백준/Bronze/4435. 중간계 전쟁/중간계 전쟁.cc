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
  for (int i = 0; i < n; i++)
  {
    int a[6], b[7], sum1 = 0, sum2 = 0;
    int x[] = {1, 2, 3, 3, 4, 10}, y[] = {1, 2, 2, 2, 3, 5, 10};
    for (int j = 0; j < 6; j++)
    {
      cin >> a[j];
      sum1 += a[j] * x[j];
    }
    for (int j = 0; j < 7; j++)
    {
      cin >> b[j];
      sum2 += b[j] * y[j];
    }

    cout << "Battle " << i + 1 << ": ";
    if (sum1 > sum2)
      cout << "Good triumphs over Evil";
    else if (sum1 < sum2)
      cout << "Evil eradicates all trace of Good";
    else
      cout << "No victor on this battle field";
    cout << "\n";
  }
}
