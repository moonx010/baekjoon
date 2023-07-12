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
  for (int i = 1; i <= t; i++)
  {
    int n;
    cin >> n;
    cout << "Case " << i << ": " << n - 1 << " ";
    for (int j = 0; j < n + 1; j++)
    {
      int x;
      cin >> x;
      if (j < n)
        cout << x * (n - j) << " ";
    }
    cout << "\n";
  }
}