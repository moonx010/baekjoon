#include <iostream>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int ans = 0, chk = 0;
    string s;
    cin >> s;
    for (int j = 0; j < s.size(); j++)
    {
      if (s[j] == '1')
        chk++;
      if (j % 8 == 7)
      {
        if (chk % 2 == 1)
          ans++;
        chk = 0;
      }
    }
    cout << ans << "\n";
  }
}