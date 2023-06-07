#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int k, d, a;
  scanf("%d/%d/%d", &k, &d, &a);
  if (d > k + a || d == 0)
    cout << "hasu";
  else
    cout << "gosu";
}
