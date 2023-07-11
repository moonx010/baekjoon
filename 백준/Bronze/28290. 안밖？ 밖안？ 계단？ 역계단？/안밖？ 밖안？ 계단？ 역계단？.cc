#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  string s;
  cin >> s;
  if (s.compare("fdsajkl;") == 0 || s.compare("jkl;fdsa") == 0)
    cout << "in-out";
  else if (s.compare("asdf;lkj") == 0 || s.compare(";lkjasdf") == 0)
    cout << "out-in";
  else if (s.compare("asdfjkl;") == 0)
    cout << "stairs";
  else if (s.compare(";lkjfdsa") == 0)
    cout << "reverse";
  else
    cout << "molu";
}