#include <iostream>
using namespace std;

int main()
{
  int x, y;
  cin >> x >> y;
  string a;
  getline(cin, a);
  for (int i = 0; i < x; i++)
  {
    string s;
    getline(cin, s);

    for (int j = 0; j < y; j++)
    {
      cout << s[y - j - 1];
    }
    cout << "\n";
  }
}