#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int x, a = 0, b = 0;
    cin >> x;
    for (int j = 0; j < x; j++)
    {
      char c;
      cin >> c;
      if (c == 'N')
        a++;
      else if (c == 'S')
        a--;
      else if (c == 'E')
        b++;
      else
        b--;
    }
    cout << abs(a) + abs(b) << "\n";
  }
}