#include <iostream>
using namespace std;

int main() {
  int h, m, s, n;
  cin >> h >> m >> s >> n;
  if(n >= 3600) {
    h = (h + n / 3600) % 24;
    n = n % 3600;
  }
  if(n >= 60) {
    m += n / 60;
    if(m >= 60) {
      h = (h + 1) % 24;
      m = m % 60;
    }
    n = n % 60;
  }

  s += n;
  if(s >= 60) {
    m++;
    if(m >= 60) {
      h = (h + 1) % 24;
      m = m % 60;
    }
    s = s % 60;
  }
  cout << h << " " << m << " " << s;
}
