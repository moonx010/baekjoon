#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int ans = 0;
  for(int i = 0; i < 4; i++) {
    string s;
    int n;
    cin >> s >> n;
    if(s.compare("Es") == 0) ans += n * 21;
    else ans += n * 17;
  }
  cout << ans;
}