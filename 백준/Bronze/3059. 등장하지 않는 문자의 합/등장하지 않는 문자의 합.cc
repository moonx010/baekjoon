#include <iostream>
#include <cmath>
#include <string>

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
    cin >> s;
    int sum = (65 + 90) * 26 / 2;
    bool a[26] = {false};
    for (int j = 0; j < s.size(); j++)
    {
      if (!a[s[j] - 'A'])
      {
        sum -= s[j];
        a[s[j] - 'A'] = true;
      }
    }
    cout << sum << "\n";
  }
}
