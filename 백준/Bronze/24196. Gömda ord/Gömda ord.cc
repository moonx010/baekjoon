#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  string s;
  cin >> s;
  int cur = 0;
  while (cur < s.size())
  {
    cout << s[cur];
    cur += (s[cur] - 'A') + 1;
  }
}
