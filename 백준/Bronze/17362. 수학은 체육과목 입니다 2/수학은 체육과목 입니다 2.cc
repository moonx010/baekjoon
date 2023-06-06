#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int n;
  cin >> n;
  int a[] = {1, 2, 3, 4, 5, 4, 3, 2};
  cout << a[(n - 1) % 8];
}