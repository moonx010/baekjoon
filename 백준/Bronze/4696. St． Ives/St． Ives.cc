#include <iostream>
using namespace std;

int main()
{
  double n;
  cin >> n;
  while (n != 0)
  {
    cout << fixed;
    cout.precision(2);
    cout << 1 + n + n * n + n * n * n + n * n * n * n << "\n";
    cin >> n;
  }
}