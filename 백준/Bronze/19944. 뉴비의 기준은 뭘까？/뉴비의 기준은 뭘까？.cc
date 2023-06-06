#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int n, m;
  cin >> n >> m;
  if(m <= 2) cout << "NEWBIE!";
  else if(m > 2 && m <= n) cout << "OLDBIE!";
  else cout << "TLE!";
}