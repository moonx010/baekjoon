#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int n;
  cin >> n;
  cout << ((n + 2) * (n + 1) * n) / 2;
}