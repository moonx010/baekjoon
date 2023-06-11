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
    double a, b;
    cin >> a >> b;
    cout << fixed;
    cout.precision(1);
    cout << abs(a - b) << "\n";
  }
}
