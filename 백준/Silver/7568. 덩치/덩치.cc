#include <stdio.h>

#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin >> n;
  int x[n], y[n];

  for (int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
  }

  for (int i = 0; i < n; i++) {
    int cnt = 1;
    for (int j = 0; j < n; j++) {
      if (x[i] < x[j]) {
        if (y[i] < y[j]) {
          cnt++;
        }
      }
    }

    cout << cnt << " ";
  }
}