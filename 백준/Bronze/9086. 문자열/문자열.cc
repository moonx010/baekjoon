#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n;
  cin >> n;

  string s[n];
  for (int i = 0; i < n; i++)
  {
    cin >> s[i];
  }

  for (int i = 0; i < n; i++)
  {
    cout << s[i][0] << s[i][s[i].size() - 1] << "\n";
  }
}