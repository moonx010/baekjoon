#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  double arr[n];
  for(int i = 0; i < n; i++) {
    double x, a, b;
    cin >> x >> a >> b;
    arr[i] =  x * a * b;
  }

  cout << fixed;
  cout.precision(2);
  for(int i = 0; i < n; i++) {
    cout << "$" << arr[i] << "\n";
  }
}
