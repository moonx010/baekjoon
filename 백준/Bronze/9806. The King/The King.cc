#include <stdio.h>

#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int cntSons, exponent;
  cin >> cntSons >> exponent;

  vector<int> posPotential, negPotential;
  for (int i = 0; i < cntSons; i++) {
    int potential;
    cin >> potential;
    if (potential > 0)
      posPotential.push_back(potential);
    else
      negPotential.push_back(potential);
  }

  sort(posPotential.rbegin(), posPotential.rend());
  sort(negPotential.begin(), negPotential.end(),
       [](const int& a, const int& b) { return abs(a) > abs(b); });

  int maxChanceWin = 0;
  for (const auto& potential : posPotential)
    maxChanceWin += pow(potential, exponent);

  if (exponent % 2 == 0) {
    for (const auto& potential : negPotential)
      maxChanceWin += pow(potential, exponent);
  }

  cout << maxChanceWin << "\n";
}