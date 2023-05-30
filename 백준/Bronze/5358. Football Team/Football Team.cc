#include <iostream>
using namespace std;

int main()
{
  while (true)
  {
    if (cin.eof())
      break;
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
      if (s[i] == 'i')
        cout << 'e';
      else if (s[i] == 'e')
        cout << 'i';
      else if (s[i] == 'I')
        cout << 'E';
      else if (s[i] == 'E')
        cout << 'I';
      else
        cout << s[i];
    }
    cout << "\n";
  }
}