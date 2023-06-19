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
    int min = -1, sum = 0;
    for (int j = 0; j < 7; j++)
    {
      int x;
      cin >> x;
      if (x % 2 == 0)
      {
        if (min < 0 || x < min)
          min = x;
        sum += x;
      }
    }
    cout << sum << " " << min << "\n";
  }
}
