#include <iostream>
#include <math.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  int sum_a = 0, sum_b = 0;
  for(int i = 0; i < 3; i++) {
    int a;
    cin >> a;
    sum_a += a * (3 - i);
  }

  for(int i = 0; i < 3; i++) {
    int b;
    cin >> b;
    sum_b += b * (3 - i);
  }

  if(sum_a > sum_b) cout << "A";
  else if(sum_a < sum_b) cout << "B";
  else cout << "T";
}
