#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, m;
  cin >> n;
  string x, s[n];
  getline(cin, x);
  for (int i = 0; i < n; i++)
  {
    getline(cin, s[i]);
  }
  cin >> m;
  for (int i = 0; i < m; i++)
  {
    int x;
    cin >> x;
    cout << "Rule " << x << ": ";
    if (x - 1 < 0 || x - 1 >= n)
      cout << "No such rule";
    else
      cout << s[x - 1];
    cout << "\n";
  }
}
