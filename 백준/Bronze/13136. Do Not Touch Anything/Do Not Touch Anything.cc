#include <iostream>
using namespace std;

int main() {
  long long int r, c, n;
  cin >> r >> c >> n;
  cout << (((r - 1) / n) + 1) * (((c - 1) / n) + 1);
}
