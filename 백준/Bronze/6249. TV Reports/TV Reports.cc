#include <iostream>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, cur, h;
  cin >> n >> cur >> h;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    if (x > h)
    {
      cout << "BBTV: Dollar reached " << x << " Oshloobs, A record!\n";
      h = x;
    }
    else if (x < cur)
    {
      cout << "NTV: Dollar dropped by " << cur - x << " Oshloobs\n";
    }
    cur = x;
  }
}