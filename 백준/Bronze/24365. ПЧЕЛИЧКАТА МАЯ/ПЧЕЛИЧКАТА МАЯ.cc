#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int a, b, c;
  cin >> a >> b >> c;
  int target = (a + b + c) / 3;
  cout << (target - a) + (target - (b - (target - a)));
}
