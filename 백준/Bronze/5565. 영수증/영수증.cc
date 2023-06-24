#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int tot;
  cin >> tot;
  for(int i = 0; i < 9; i++) {
    int x;
    cin >> x;
    tot -= x;
  }
  cout << tot;
}