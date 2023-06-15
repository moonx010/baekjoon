#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    long long int t, sum = 0;
    cin >> t;
    for(int j = 0; j < t; j++) {
      long long int x;
      cin >> x;
      sum = (sum + x) % t;
    }
    if(sum % t != 0) cout << "NO\n";
    else cout << "YES\n";
  }
}