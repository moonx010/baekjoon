#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int a, b, c;
  cin >> a >> b >> c;
  while(!(a == 0 && b == 0 && c == 0)) {
    if(max(a, max(b, c)) * 2 >= a + b + c) cout << "Invalid";
    else if(a == b && b == c) cout << "Equilateral";
    else if(a == b || b == c || c == a) cout << "Isosceles";
    else cout << "Scalene";
    cout << "\n";
    cin >> a >> b >> c;
  }
}