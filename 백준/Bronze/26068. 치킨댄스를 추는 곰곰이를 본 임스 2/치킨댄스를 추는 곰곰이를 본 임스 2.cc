#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, ans = 0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    char s[7];
    cin >> s;
    int x = stoi(s + 2);
    if (x <= 90)
      ans++;
  }

  cout << ans;
}
