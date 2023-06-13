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
  cout << (char)((n - 1) % 8 + 'a') << ((n - 1) / 8) + 1;
}
