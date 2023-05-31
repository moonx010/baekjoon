#include <iostream>
using namespace std;

int main() {
  int a[5];
  int sum = 0;
  for(int i = 0; i < 5; i++) {
    cin >> a[i];
    sum += a[i] < 40 ? 40 : a[i];
  }

  cout << sum / 5;
}
