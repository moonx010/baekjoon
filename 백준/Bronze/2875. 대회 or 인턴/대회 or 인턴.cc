#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int n, m, k, max = 0;
  cin >> n >> m >> k;
  for(int i = 0; i < k; i++) {
    if(n > 2 * m) n--;
    else m--;
  }
  cout << min(n / 2, m);
}