#include <stdio.h>

#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, M = 0;
  cin >> n;
  for(int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    if(a * b > M) M = a * b;
  }
  cout << M;
}