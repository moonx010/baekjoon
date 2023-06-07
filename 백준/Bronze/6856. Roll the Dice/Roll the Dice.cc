#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int a, b;
  int ans = 0;
  cin >> a >> b;
  for (int i = 1; i <= a; i++)
  {
    if (10 - i >= 1 && 10 - i <= b)
      ans++;
  }

  if (ans != 1)
    cout << "There are " << ans << " ways to get the sum 10.";
  else
    cout << "There is " << ans << " way to get the sum 10.";
}
