#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  int n;
  cin >> n;
  double vol = 0;
  for(int i = 0; i < n; i++) {
    double x;
    cin >> x;
    vol += pow(x, 3);
  }
  cout << fixed;
  cout.precision(6);
  cout << pow(vol, 1.0/3.0);
}