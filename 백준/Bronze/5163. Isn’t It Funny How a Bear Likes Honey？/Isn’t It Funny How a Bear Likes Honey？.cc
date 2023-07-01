#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int t;
  cin >> t;
  for(int i = 0; i < t; i++) {
    int n;
    double w, sum = 0;
    cin >> n >> w;
    for(int j = 0; j < n; j++) {
      double r;
      cin >> r;
      sum += 4 * M_PI * pow(r, 3) / 3;
    }
    cout << "Data Set " << i + 1 << ":\n";
    if(sum / 1000 > w) cout << "Yes\n\n";
    else cout << "No\n\n";
  }
}