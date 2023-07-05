#include <bits/stdc++.h>

using namespace std;

string ans = "No";
int main(){
  int t, b1, b2, lx, ly, hx, hy;
  cin >> t >> b1 >> b2;
  while(t--){
    cin >> lx >> ly >> hx >> hy;
    if(lx <= b1 && b1 <= hx && ly <= b2 && b2 <= hy) ans = "Yes";
  }
  cout << ans;
}