#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int t, cnt_a = 0, cnt_b = 0;
  cin >> t;
  for(int i = 0; i < t; i++) {
    int a, b;
    cin >> a >> b;
    if(a > b) cnt_a++;
    if(a < b) cnt_b++;
  }
  cout << cnt_a << " " << cnt_b;
}