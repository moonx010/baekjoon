#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int a, b;
  cin >> a >> b;
  while(!(a == 0 && b == 0)) {
    if(a % b == 0) cout << "multiple";
    else if(b % a == 0) cout << "factor";
    else cout << "neither";
    cout << "\n";
    cin >> a >> b;
  }
}