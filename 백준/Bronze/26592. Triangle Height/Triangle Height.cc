#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int n;
  cin >> n;
  cout << fixed;
  cout.precision(2);
  for(int i= 0; i < n; i++) {
    double a, b;
    cin >> a >> b;
    cout << "The height of the triangle is " << a * 2 / b << " units\n";
  }
}