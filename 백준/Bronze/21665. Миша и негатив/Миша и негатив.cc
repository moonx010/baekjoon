#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int a, b, ans = 0;
  cin >> a >> b;
  char p[a][b], q[a][b];
  for (int i = 0; i < a; i++)
  {
    string s;
    cin >> s;
    for (int j = 0; j < b; j++)
    {
      p[i][j] = s[j];
    }
  }

  for (int i = 0; i < a; i++)
  {
    string s;
    cin >> s;
    for (int j = 0; j < b; j++)
    {
      if (s[j] == p[i][j])
        ans++;
    }
  }

  cout << ans;
}
