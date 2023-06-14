#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int a, b;
  cin >> a >> b;
  int xa = (a - 1) % 4, ya = (a - 1) / 4, xb = (b - 1) % 4, yb = (b - 1) / 4;
  cout << abs(xa - xb) + abs(ya - yb);
}
