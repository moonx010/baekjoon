#include <stdio.h>

#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, m;
  cin >> n >> m;
  int arr[100] = {0};
  for (int i = 0; i < m; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    for (int j = a; j <= b; j++) {
      arr[j - 1] = c;
    }
  }

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}