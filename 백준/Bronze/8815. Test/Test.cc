#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  long long int n;
  cin >> n;
  for (long long int i = 0; i < n; i++)
  {
    string s = "BCBCDCDADABA";
    long long int x;
    cin >> x;
    if (x == 1)
      cout << "A\n";
    else
      cout << s[(x - 2) % 12] << "\n";
  }
}