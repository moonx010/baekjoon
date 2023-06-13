#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, m;
  cin >> n >> m;
  if(n == 1 || m == 1) cout << n * m;
  else cout << (n + m - 2) * 2;
}
