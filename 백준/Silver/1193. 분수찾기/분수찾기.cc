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
  int x = 1, cnt = 1;
  while (x < n)
  {
    cnt++;
    x = (cnt + 1) * cnt / 2;
  }
  n = n - ((cnt - 1) * (cnt) / 2);
  if (cnt % 2 == 0)
    cout << n << "/" << (cnt + 1) - n;
  else
    cout << ((cnt + 1) - n) << "/" << n;
}