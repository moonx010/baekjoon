#include <iostream>
using namespace std;

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  if(a < b) cout << "Bus";
  else {
    if(a == b) {
      if(n <= b) cout << "Anything";
      else cout << "Bus";
    }
    else {
      if(n > b) cout << "Bus";
      else cout << "Subway";
    }
  }
}
