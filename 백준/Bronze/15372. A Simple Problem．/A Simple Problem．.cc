#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  long long int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    long long int x;
    cin >> x;
    cout << x * x << "\n";
  }
}
