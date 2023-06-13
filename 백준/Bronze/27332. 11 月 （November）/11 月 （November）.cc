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
  if (a + 7 * b > 30)
    cout << 0;
  else
    cout << 1;
}
