#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int n;
  cin >> n;
  for(int i = 0; i < n ; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    if(a + c < b) cout << "advertise";
    else if(a + c > b) cout << "do not advertise";
    else cout << "does not matter";
    cout << "\n";
  }
}