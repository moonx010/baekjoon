#include <iostream>
using namespace std;

bool checkPelindrom(string s)
{
  int l = 0;
  int r = s.size() - 1;
  while (l < r)
  {
    if (s[l] != s[r])
      return false;
    l++;
    r--;
  }

  return true;
}

int main()
{
  string s;
  getline(cin, s);
  while (s != "0")
  {
    if (checkPelindrom(s))
      cout << "yes";
    else
      cout << "no";
    cout << "\n";
    getline(cin, s);
  }
}
