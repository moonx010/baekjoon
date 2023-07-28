#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int x, y;
  cin >> x >> y;
  vector<vector<char>> board;
  for (int i = 0; i < x; i++)
  {
    vector<char> t;
    for (int j = 0; j < y; j++)
    {
      char c;
      cin >> c;
      t.push_back(c);
    }
    board.push_back(t);
  }

  vector<vector<int>> chk;

  for (int i = 0; i < x; i++)
  {
    char c;
    if (i % 2 == 0)
      c = 'B';
    else
      c = 'W';

    vector<int> t;
    for (int j = 0; j < y; j++)
    {
      int a = 0, b = 0, com = 0;
      if (i > 0)
        a = chk.at(i - 1).at(j);
      if (j > 0)
        b = t.at(j - 1);
      if (i > 0 && j > 0)
        com = chk.at(i - 1).at(j - 1);

      int sum = a + b - com;
      if (board.at(i).at(j) != c)
        t.push_back(sum + 1);
      else
        t.push_back(sum);

      if (c == 'B')
        c = 'W';
      else
        c = 'B';
    }
    chk.push_back(t);
  }
  int m = -1;

  for (int i = 7; i < x; i++)
  {
    for (int j = 7; j < y; j++)
    {
      int a = 0, b = 0, com = 0;
      if (i > 7)
        a = chk.at(i - 8).at(j);
      if (j > 7)
        b = chk.at(i).at(j - 8);
      if (i > 7 && j > 7)
        com = chk.at(i - 8).at(j - 8);
      int cur = chk.at(i).at(j) - a - b + com;
      if (m < 0)
        m = min(cur, 64 - cur);
      m = min(m, min(cur, 64 - cur));
    }
  }
  cout << m;
}