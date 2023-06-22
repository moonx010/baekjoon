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
  string x;
  getline(cin, x);
  for (int i = 0; i < n; i++)
  {
    string s;
    getline(cin, s);
    if (s[0] >= 'a' && s[0] <= 'z')
      cout << (char)(s[0] - 32);
    else
      cout << s[0];
    for (int i = 1; i < s.size(); i++)
    {
      cout << s[i];
    }
    cout << "\n";
  }
}
