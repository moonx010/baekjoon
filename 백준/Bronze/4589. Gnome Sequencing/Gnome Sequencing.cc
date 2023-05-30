#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  string s[n];
  for (int i = 0; i < n; i++)
  {
    int a[3];
    for (int j = 0; j < 3; j++)
    {
      cin >> a[j];
    }
    if (a[0] < a[1] && a[1] < a[2])
      s[i] = "Ordered";
    else if (a[0] > a[1] && a[1] > a[2])
      s[i] = "Ordered";
    else
      s[i] = "Unordered";
  }

  cout << "Gnomes:\n";
  for (int i = 0; i < n; i++)
  {
    cout << s[i] << "\n";
  }
}