#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int n;
  cin >> n;
  for(int i = 1; i <= n; i++) {
    if(i % 7 == 0 && i % 11 == 0) cout <<  "Wiwat!";
    else if(i % 7 == 0) cout << "Hurra!";
    else if(i % 11 == 0) cout << "Super!";
    else cout << i;
    cout << "\n";
  }
}