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
    string s;
    int sum = 0;
    cin >> s;
    for (int j = 0; j < s.length(); j++)
    {
      int x = s[j] - '0';
      sum += x;
    }
    int a = 0;
    for (int j = s.length() - 3; j < s.length(); j++)
    {
      a = a * 10 + (s[j] - '0');
    }
    a *= 10;
    int ans = a + sum;
    if (ans < 1000)
      ans += 1000;
    string m = to_string(ans);
    if (m.length() > 4)
    {
      m = m.substr(1);
    }
    cout << m << "\n";
  }
}