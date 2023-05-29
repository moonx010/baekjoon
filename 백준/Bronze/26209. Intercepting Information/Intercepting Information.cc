#include <iostream>
using namespace std;

int main() {
  string result = "S";
  for(int i = 0; i < 8; i++) {
    int b;
    cin >> b;
    if(b == 9) result = "F";
    
  }
  cout << result;
}
