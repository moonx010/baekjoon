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

  vector<int> arr;
  int n, ans = 0;

  cin >> n;

  if (n == 0) {
    cout << 0;
    return 0;
  }

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    arr.push_back(x);
  }

  sort(arr.begin(), arr.end());

  int cut = round((double)n * 0.15);

  for (int i = cut; i < n - cut; i++) {
    ans += arr[i];
  }

  int avg = round((double)ans / (double)(n - (2 * cut)));

  cout << avg;
}