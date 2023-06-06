#include <iostream>
#include <math.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int p1, s1, s2, p2;
  cin >> p1 >> s1 >> s2 >> p2;
  if(p1 + p2 > s1 + s2) cout << "Persepolis";
  else if(p1 + p2 < s1 + s2) cout << "Esteghlal";
  else {
    if(s1 > p2) cout << "Esteghlal";
    else if(s1 < p2) cout << "Persepolis";
    else cout << "Penalty";
  }
}
