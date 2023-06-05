#include <iostream>

using namespace std;

bool passBirthDay(int m1, int d1, int m2, int d2) {
  if(m2 > m1) return true;
  if(m2 < m1) return false;
  else {
    if(d2 >= d1) return true;
    else return false;
  }
}

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int y1, m1, d1, y2, m2, d2;
  cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2;
  cout << y2 - y1 - 1 + (passBirthDay(m1, d1, m2, d2) ? 1 : 0) << "\n";
  cout << y2 - y1 + 1 << "\n";
  cout << y2 - y1;
}
