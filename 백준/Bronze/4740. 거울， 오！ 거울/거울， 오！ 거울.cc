#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  string s;
  getline(cin, s);
  while (s.compare("***") != 0)
  {
    for (int i = 0; i < s.size(); i++)
    {
      cout << s[s.size() - i - 1];
    }
    cout << "\n";
    getline(cin, s);
  }
}
