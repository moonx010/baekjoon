#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  string a[] = {"ITMO", "SPbSU", "SPbSU", "ITMO", "ITMO", "SPbSU", "ITMO", "ITMO", "ITMO", "ITMO", "ITMO", "PetrSU, ITMO", "SPbSU", "SPbSU", "ITMO", "ITMO", "ITMO", "ITMO", "SPbSU", "ITMO", "ITMO", "ITMO", "ITMO", "SPbSU", "ITMO"};
  int x;
  cin >> x;
  cout << a[x - 1995];
}