#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int a, b, c;
  scanf("%d + %d = %d", &a, &b, &c);
  if (a + b == c)
    cout << "YES";
  else
    cout << "NO";
}
