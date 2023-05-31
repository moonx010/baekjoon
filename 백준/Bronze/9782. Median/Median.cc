#include <iostream>
using namespace std;

int main()
{
  int n;
  int cnt = 1;
  cin >> n;
  while (n != 0)
  {
    double result = 0;
    double a[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    if (n % 2 == 1)
      result = a[(n - 1) / 2];
    else
      result = (a[(n / 2) - 1] + a[n / 2]) / 2;

    cout << fixed;
    cout.precision(1);
    cout << "Case " << cnt << ": " << result << "\n";

    cnt++;
    cin >> n;
  }
}