#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int cnt = 0;
  for(int i = 0; i < 3; i++) {
    int x;
    cin >> x;
    if(x == 1) cnt++;
  }
  if(cnt > 1) cout << 1;
  else cout << 2;
}