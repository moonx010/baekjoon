#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    cout << a << " " << b << " " << c << "\n";
    int cnt = 0;
    if(a >= 10) cnt++;
    if(b >= 10) cnt++;
    if(c >= 10) cnt++;
    if(cnt == 0) cout << "zilch\n";
    else if(cnt == 1) cout << "double\n";
    else if(cnt == 2) cout << "double-double\n";
    else cout << "triple-double\n";
    cout << "\n";
  }
}