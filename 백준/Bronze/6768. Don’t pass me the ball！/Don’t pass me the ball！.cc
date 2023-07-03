#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  if (n < 4)
    cout << 0;
  else
    cout << (n - 1) * (n - 2) * (n - 3) / 6;
}