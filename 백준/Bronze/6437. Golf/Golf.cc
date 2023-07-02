#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int a, b, cnt = 1;
  cin >> a >> b;
  while(!(a == 0 && b == 0)) {
    cout << "Hole #" << cnt << "\n";
    if(b == 1) cout << "Hole-in-one";
    else if(a - 3 == b) cout << "Double Eagle";
    else if(a - 2 == b) cout << "Eagle";
    else if(a - 1 == b) cout << "Birdie";
    else if(a == b) cout << "Par";
    else if(a + 1 == b) cout << "Bogey";
    else cout << "Double Bogey";
    cout << ".\n\n";
    cnt++;
    cin >> a >> b;
  }
}