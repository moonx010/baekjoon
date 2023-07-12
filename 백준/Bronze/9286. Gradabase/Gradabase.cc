#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    int n;
    cin >> n;
    cout << "Case " << i + 1 << ":\n";
    for (int j = 0; j < n; j++)
    {
      int x;
      cin >> x;
      if (x < 6)
        cout << x + 1 << "\n";
    }
  }
}