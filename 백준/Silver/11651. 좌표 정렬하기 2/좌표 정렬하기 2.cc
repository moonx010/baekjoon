#include <stdio.h>

#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;
bool compare(pair<int, int> a, pair<int, int> b) {
  if (a.second != b.second) return a.second < b.second;
  return a.first < b.first;
}
int main() {
  int num;
  cin >> num;
  pair<int, int> tmp;
  vector<pair<int, int>> arr;
  for (int i = 0; i < num; i++) {
    cin >> tmp.first >> tmp.second;
    arr.push_back(tmp);
  }
  stable_sort(arr.begin(), arr.end(), compare);
  for (int i = 0; i < num; i++)
    cout << arr[i].first << ' ' << arr[i].second << '\n';
}