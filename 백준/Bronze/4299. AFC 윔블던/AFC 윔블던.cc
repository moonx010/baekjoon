#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
  if ((a + b) % 2 == 1 || b > a)
    cout << -1;
  else
  {
    cout << (a + b) / 2 << " " << (a - b) / 2;
  }
}