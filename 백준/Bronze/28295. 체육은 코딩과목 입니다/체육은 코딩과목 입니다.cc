#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  char d[4] = {'N', 'E', 'S', 'W'};
  int cur = 0;
  for (int i = 0; i < 10; i++)
  {
    int x;
    cin >> x;
    cur = (cur + x) % 4;
  }
  cout << d[cur];
}