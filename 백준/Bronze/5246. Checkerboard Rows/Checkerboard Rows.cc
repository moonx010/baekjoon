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
    int n, cnt[8] = {};
    cin >> n;
    for (int j = 0; j < n; j++)
    {
      int a, b;
      cin >> a >> b;
      cnt[b - 1] = cnt[b - 1] + 1;
    }
    int max = 0;
    for (int j = 0; j < 8; j++)
    {
      if (max < cnt[j])
        max = cnt[j];
    }
    cout << max << "\n";
  }
}
