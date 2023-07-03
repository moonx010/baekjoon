#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    long long int a, b;
    cin >> a >> b;
    string A = to_string(a), B = to_string(b);
    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());
    long long int x = stoll(A) + stoll(B);
    string ans = to_string(x);
    reverse(ans.begin(), ans.end());
    cout << stoll(ans) << "\n";
  }
}