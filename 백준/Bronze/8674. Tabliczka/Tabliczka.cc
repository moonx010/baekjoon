#include <iostream>
using namespace std;

int main() {
  long long int a, b;
  cin >> a >> b;
  if(a % 2 == 0 || b % 2 == 0) cout << 0;
  else cout << min(a, b);
}
