#include <stdio.h>

#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, k;
  cin >> n >> k;
  vector<int> a;
  for (int i = 1; i <= n; i++) {
    a.push_back(i);
  }
  cout << "<";
  while (a.size()) {
    for (int i = 0; i < k - 1; i++) {
      int x = a.front();
      a = vector<int>(a.begin() + 1, a.end());
      a.push_back(x);
    }
    cout << a.front();
    if (a.size() > 1) cout << ", ";
    a = vector<int>(a.begin() + 1, a.end());
  }
  cout << ">";
}
