#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  int a, b;
  cin >> a >> b;
  int arr[a], sum = 0;
  for(int i = 0; i < a; i++) {
    cin >> arr[i];
    sum += arr[i];
  }
  for(int i = 0; i < a; i++) {
    cout << b * arr[i] / sum << "\n";
  }
}