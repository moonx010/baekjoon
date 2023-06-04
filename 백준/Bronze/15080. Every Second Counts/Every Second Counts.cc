#include <iostream>

using namespace std;

int main() {
  int a[3], b[3];
  scanf("%d : %d : %d", &a[0], &a[1], &a[2]);
  scanf("%d : %d : %d", &b[0], &b[1], &b[2]);
  int timeA = 3600 * a[0] + 60 * a[1] + a[2];
  int timeB = 3600 * b[0] + 60 * b[1] + b[2];
  int ans = timeA > timeB ? timeB - timeA + 24 * 3600 : timeB - timeA;
  cout << ans;
}
