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
    int x;
    double sum = 0;
    cin >> x;
    for (int j = 0; j < x; j++)
    {
      string s;
      double a, b;
      cin >> s >> a >> b;
      sum += a * b;
    }
    cout << fixed;
    cout.precision(2);
    cout << "$" << sum << "\n";
  }
}
