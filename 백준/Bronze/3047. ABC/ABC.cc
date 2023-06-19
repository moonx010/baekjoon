#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int a[3];
  string s;
  for (int i = 0; i < 3; i++)
  {
    cin >> a[i];
  }
  sort(a, a + 3);
  cin >> s;
  for (int i = 0; i < s.size(); i++)
  {
    cout << a[s[i] - 'A'] << " ";
  }
}
