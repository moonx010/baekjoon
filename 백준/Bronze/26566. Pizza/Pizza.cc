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
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    if (b / a < d / (M_PI * c * c))
      cout << "Slice of pizza\n";
    else
      cout << "Whole pizza\n";
  }
}
