#include <iostream>
using namespace std;

int main()
{
  int d, h, m;
  cin >> d >> h >> m;
  int ans = 60 * (24 * d + h) + m - 60 * (24 * 11 + 11) - 11;
  cout << (ans >= 0 ? ans : -1);
}