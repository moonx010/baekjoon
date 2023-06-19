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
  for (int i = 0; i < t; i++)
  {
    int n, cnt = 0;
    cin >> n;
    while (n > 0)
    {
      if (n % 2 == 1)
        cout << cnt << " ";
      cnt++;
      n = n >> 1;
    }
    cout << "\n";
  }
}
