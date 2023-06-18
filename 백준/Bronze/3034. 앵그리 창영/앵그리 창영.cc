#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, a, b;
  cin >> n >> a >> b;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    if (x * x <= a * a + b * b)
      cout << "DA\n";
    else
      cout << "NE\n";
  }
}
