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
    int price, k;
    cin >> price >> k;
    for (int j = 0; j < k; j++)
    {
      int a, b;
      cin >> a >> b;
      price += a * b;
    }
    cout << price << "\n";
  }
}