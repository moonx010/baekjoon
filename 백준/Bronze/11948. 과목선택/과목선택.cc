#include <iostream>
using namespace std;

int main() {
  int sum = 0;
  int min = 100;
  for(int i = 0; i < 4; i++) {
    int x;
    cin >> x;
    if(min > x) min = x;
    sum += x;
  }
  sum -= min;
  min = 100;
  for(int i = 0; i < 2; i++) {
    int x;
    cin >> x;
    if(min > x) min = x;
    sum += x;
  }
  sum -= min;

  cout << sum;
}
