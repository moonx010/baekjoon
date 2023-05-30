#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  string x;
  getline(cin, x);
  for (int i = 0; i < n; i++)
  {
    string s;
    getline(cin, s);
    for (int j = 0; j < s.size(); j++)
    {
      if (s[j] >= 'A' && s[j] <= 'Z')
        cout << (char)(s[j] + 32);
      else
        cout << s[j];
    }
    cout << "\n";
  }
}