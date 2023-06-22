#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  while (!(a == 0 && b == 0 && c == 0))
  {
    if (b - a == c - b)
      cout << "AP " << 2 * c - b << "\n";
    else
      cout << "GP " << c * c / b << "\n";
    cin >> a >> b >> c;
  }
}