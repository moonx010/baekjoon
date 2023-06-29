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
    int n, even = 0, odd = 0;
    cin >> n;
    for (int j = 0; j < n; j++)
    {
      int x;
      cin >> x;
      if (x % 2 == 0)
        even += x;
      else
        odd += x;
    }
    if (even > odd)
      cout << "EVEN";
    else if (even < odd)
      cout << "ODD";
    else
      cout << "TIE";
    cout << "\n";
  }
}
