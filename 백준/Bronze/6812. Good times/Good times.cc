#include <stdio.h>

#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  cout << n << " in Ottawa\n";
  cout << ((n - 300) >= 0 ? n - 300 : (n + 2100)) << " in Victoria\n";
  cout << ((n - 200) >= 0 ? n - 200 : (n + 2200)) << " in Edmonton\n";
  cout << ((n - 100) >= 0 ? n - 100 : (n + 2300)) << " in Winnipeg\n";
  cout << n << " in Toronto\n";
  cout << ((n + 100) % 2400) << " in Halifax\n";
  int x = (((n / 100) + 1) * 60 + n % 100 + 30) % (24 * 60);

  if (x / 60) cout << x / 60;
  if (x) cout << (x % 60 < 10 ? "0" : "") << x % 60;
  cout << " in St. John's\n";
}