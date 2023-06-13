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
  bool a[3] = {true, false, false};
  for (int i = 0; i < n; i++)
  {
    int x, y;
    cin >> x >> y;
    bool t = a[x - 1];
    a[x - 1] = a[y - 1];
    a[y - 1] = t;
  }

  for (int i = 1; i <= 3; i++)
  {
    if (a[i - 1])
      cout << i;
  }
}
