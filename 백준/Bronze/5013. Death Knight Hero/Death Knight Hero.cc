#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, ans;
  cin >> n;
  ans = n;
  for (int i = 0; i < n; i++)
  {
    string s;
    cin >> s;
    for (int j = 0; j < s.size(); j++)
    {
      if (s[j] == 'C')
      {
        if (j < s.size() - 1 && s[j + 1] == 'D')
          ans--;
      }
    }
  }
  cout << ans;
}
