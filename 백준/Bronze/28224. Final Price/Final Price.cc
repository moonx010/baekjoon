#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int n;
  cin >> n;
  int t = 0;
  for(int i = 0; i < n; i++) {
    int x;
    cin >> x;
    t += x;
  }
  cout << t;
}