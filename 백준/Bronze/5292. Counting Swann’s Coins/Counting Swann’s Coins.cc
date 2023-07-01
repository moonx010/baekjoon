#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int n;
  cin >> n;
  for(int i = 1; i <= n; i++) {
    if(i % 3 == 0 && i % 5 == 0) cout << "DeadMan\n";
    else if(i % 3 == 0) cout << "Dead\n";
    else if(i % 5 == 0) cout << "Man\n";
    else cout << i << " ";
  }
}