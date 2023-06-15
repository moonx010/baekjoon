#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  char arr[5] = {'D', 'C', 'B', 'A', 'E'};
  for(int i = 0; i < 3; i++) {
    int x = 0;
    for(int i = 0; i < 4; i++) {
      int y;
      cin >> y;
      x += y;
    }
    cout << arr[x] << "\n";
  }
}