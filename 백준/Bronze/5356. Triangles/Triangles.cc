#include <iostream>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    int n;
    char c;
    cin >> n >> c;
    for (int j = 0; j < n; j++)
    {
      for (int p = 0; p <= j; p++)
      {
        cout << c;
      }
      cout << "\n";
      c = (char)('A' + (c - 'A' + 1) % 26);
    }
    cout << "\n";
  }
}
