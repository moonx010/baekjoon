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
  int col = 0, un = 0;
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == ':')
      col++;
    if (s[i] == '_')
      un++;
  }
  cout << s.size() + col + un * 5;
}
