#include <iostream>
using namespace std;

int main()
{
  string s;
  getline(cin, s);
  while (s != "END")
  {
    for (int i = s.size() - 1; i >= 0; i--)
    {
      cout << s[i];
    }
    cout << "\n";
    getline(cin, s);
  }
}