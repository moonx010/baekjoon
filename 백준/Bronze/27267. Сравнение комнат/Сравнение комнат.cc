#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if (a * b > c * d)
    cout << "M";
  else if (a * b < c * d)
    cout << "P";
  else
    cout << "E";
}
