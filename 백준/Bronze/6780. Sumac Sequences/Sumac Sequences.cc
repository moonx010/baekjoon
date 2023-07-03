#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int t1, t2, cnt = 2;
  cin >> t1 >> t2;
  while(true) {
    int t = t1 - t2;
    cnt++;
    if(t > t2) break;
    t1 = t2;
    t2 = t;
  }
  cout << cnt;
}