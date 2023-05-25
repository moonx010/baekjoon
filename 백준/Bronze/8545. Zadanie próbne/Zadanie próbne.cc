#include <iostream>
#include <string>

using namespace std;
string s;
int main()
{
  cin >> s;
  for (int i = s.size() - 1; i >= 0; i--)
  {
    cout << s[i];
  }
}