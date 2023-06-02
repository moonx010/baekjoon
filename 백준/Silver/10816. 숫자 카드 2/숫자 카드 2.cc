#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  unordered_map<int, int> m;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    if (m.find(x) != m.end())
      m[x] += 1;
    else
      m[x] = 1;
  }

  int q;
  cin >> q;
  for (int i = 0; i < q; i++)
  {
    int x;
    cin >> x;
    auto item = m.find(x);
    if (item != m.end())
      cout << item->second;
    else
      cout << 0;
    cout << "\n";
  }
}
