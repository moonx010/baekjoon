#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  int x;
  cin >> x;
  while (x != 0)
  {
    cout << x << " is ";
    if (x % n != 0)
      cout << "NOT ";
    cout << "a multiple of " << n << ".\n";
    cin >> x;
  }
}
