#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    bool z = false, m = false;
    for(int j = 0; j < 10; j++) {
      int x;
      cin >> x;
      cout << x << " ";
      if(x == 17) z = true;
      if(x == 18) m = true;
    }
    cout << "\n";

    if(z && m) cout << "both";
    else if(z) cout << "zack";
    else if(m) cout << "mack";
    else cout << "none";
    cout << "\n\n";
  }
}