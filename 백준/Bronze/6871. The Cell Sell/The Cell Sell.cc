#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0);
  double a, b, c;
  cin >> a >> b >> c;
  double planA = max(0.0, a - 100) * 0.25 + 0.15 * b + 0.20 * c;
  double planB = max(0.0, a - 250) * 0.45 + 0.35 * b + 0.25 * c;
  cout << fixed;
  cout.precision(2);
  cout << "Plan A costs " << planA << "\n";
  cout << "Plan B costs " << planB << "\n";
  if(planA > planB) cout << "Plan B is cheapest." ;
  else if(planA < planB) cout << "Plan A is cheapest.";
  else cout << "Plan A and B are the same price.";

}