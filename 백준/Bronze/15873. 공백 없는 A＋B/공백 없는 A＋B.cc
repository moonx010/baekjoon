#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int n, a, b;
  cin >> n;
  if(n >= 200) {
    a = n / 100;
    b = n % 100;
  }
  else{
    a = n / 10;
    b = n % 10;
  }
  cout << a + b;
}
