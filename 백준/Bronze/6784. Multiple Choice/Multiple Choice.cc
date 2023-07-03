#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int n, cnt = 0;
  cin >> n;
  char student[n], ans[n];
  for(int i = 0; i < n; i++) {
    cin >> student[i];
  }
  for(int i = 0; i < n; i++) {
    cin >> ans[i];
  }
  for(int i = 0; i < n; i++) {
    if(student[i] == ans[i]) cnt++;
  }
  cout << cnt;
}