#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  for (int i = 1; i <= t; i++)
  {
    string a, b;
    cin >> a >> b;
    cout << "Case " << i << ": " << b << ", " << a << "\n";
  }
}