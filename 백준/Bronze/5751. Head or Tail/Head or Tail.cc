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
  while(n != 0) {
    int a = 0, b = 0;
    for(int i = 0; i < n; i++) {
      int x;
      cin >> x;
      if(x) b++;
      else a++;
    }
    cout << "Mary won " << a << " times and John won " << b << " times\n";
    cin >> n;
  }
}