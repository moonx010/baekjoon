#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, cnt = 1;
  cin >> n;
  while (n != 0)
  {
    if (n % 2)
      n = n / 2 + 1;
    else
      n /= 2;
    n += n / 2;
    cout << "File #" << cnt << "\n";
    cout << "John needs " << (n + 1860000 - 1) / 1860000 << " floppies.\n\n";
    cnt++;
    cin >> n;
  }
}