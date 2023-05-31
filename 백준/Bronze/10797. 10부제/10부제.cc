#include <iostream>
using namespace std;

int main()
{
  int n;
  int cnt = 0;
  cin >> n;
  for (int i = 0; i < 5; i++)
  {
    int x;
    cin >> x;
    if (x == n)
      cnt++;
  }

  cout << cnt;
}