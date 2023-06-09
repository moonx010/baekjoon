#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  char c;
  cin >> c;
  if(c == 'n' || c == 'N') cout << "Naver D2";
  else cout << "Naver Whale";
}