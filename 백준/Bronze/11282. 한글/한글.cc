#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  string S;
  n += 3071;
  S.push_back(n / 4096 + 234);
  S.push_back(n / 64 % 64 + 128);
  S.push_back(n % 64 + 128);
  cout << S;
}