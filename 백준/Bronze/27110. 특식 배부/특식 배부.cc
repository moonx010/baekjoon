#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int n, a, b, c;
  cin >> n >> a >> b >> c;
  cout << min(n, a) + min(n, b) + min(n, c);
}