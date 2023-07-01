#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int t;
  cin >> t;
  for(int i = 0; i < t; i++) {
    int n, c, cnt = 0;
    cin >> n >> c;
    while(n != 0) {
      if(n % 2 == 1) cnt++;
      n = n >> 1;
    }
    if((cnt + c) % 2 == 1) cout << "Corrupt\n";
    else cout << "Valid\n";
  }
}