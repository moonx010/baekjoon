#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  string ans[n];
  string x;
  getline(cin, x);
  for (int i = 0; i < n; i++)
  {
    string s;
    getline(cin, s);
    char b = '\0';
    string t;
    for (int j = 0; j < s.size(); j++)
    {
      if (s[j] != b)
      {
        b = s[j];
        t.push_back(s[j]);
      }
    }
    ans[i] = t;
  }

  for (int i = 0; i < n; i++)
  {
    cout << ans[i] << "\n";
  }
}