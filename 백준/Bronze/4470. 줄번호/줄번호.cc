#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  string x;
  getline(cin, x);
  string s[n];
  for (int i = 0; i < n; i++)
  {
    getline(cin, s[i]);
  }

  for (int i = 1; i <= n; i++)
  {
    cout << i << ". " << s[i - 1] << "\n";
  }
}