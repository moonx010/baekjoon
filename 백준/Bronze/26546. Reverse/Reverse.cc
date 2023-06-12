#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    string s;
    int a, b;
    cin >> s >> a >> b;
    for (int j = 0; j < s.size(); j++)
    {
      if (j >= a && j < b)
        continue;
      cout << s[j];
    }
    cout << "\n";
  }
}
