#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, ans = 0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    string s;
    cin >> s;
    if (s.compare("Poblano") == 0)
    {
      ans += 1500;
    }
    if (s.compare("Mirasol") == 0)
    {
      ans += 6000;
    }
    if (s.compare("Serrano") == 0)
    {
      ans += 15500;
    }
    if (s.compare("Cayenne") == 0)
    {
      ans += 40000;
    }
    if (s.compare("Thai") == 0)
    {
      ans += 75000;
    }
    if (s.compare("Habanero") == 0)
    {
      ans += 125000;
    }
  }
  cout << ans;
}