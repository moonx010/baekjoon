#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  long long int a, b;
  cin >> a >> b;
  if (a >= b - 1)
  {
    cout << b;
  }
  else
  {
    cout << a + 1;
  }
}
