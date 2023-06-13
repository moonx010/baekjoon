#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  string s;
  cin >> n >> s;
  for (int i = 0; i < n - 1; i++)
  {
    cout << s[i];
  }
  if (s[n - 1] != 'G')
  {
    cout << s[n - 1] << 'G';
  }
}
