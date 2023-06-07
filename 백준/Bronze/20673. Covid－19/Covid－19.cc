#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int a, b;
  cin >> a >> b;
  if (a <= 50 && b <= 10)
    cout << "White";
  else if (b > 30)
    cout << "Red";
  else
    cout << "Yellow";
}
