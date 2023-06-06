#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int n, m;
  cin >> n >> m;
  if(n >= 8) cout << "satisfactory";
  else cout << "unsatisfactory";
}