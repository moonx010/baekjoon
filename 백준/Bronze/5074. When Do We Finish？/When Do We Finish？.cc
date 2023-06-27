#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int h1, m1, h2, m2;
  scanf("%d:%d %d:%d", &h1, &m1, &h2, &m2);
  while(!(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0)) {
    int t = 60 * h1 + m1 + 60 * h2 + m2, n;
    n = t / (24 * 60);
    t = t % (24 * 60);
    cout << ((t / 60) < 10 ? "0" : "") << t / 60 << ":" << ((t % 60) < 10 ? "0" : "") << t % 60;
    if(n) cout << " +" << n;
    cout << "\n";
    scanf("%d:%d %d:%d", &h1, &m1, &h2, &m2);
  }
}