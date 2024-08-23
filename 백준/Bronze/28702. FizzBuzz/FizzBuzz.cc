#include <stdio.h>

#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isInt(string s);

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  string a, b, c;
  getline(cin, a);
  getline(cin, b);
  getline(cin, c);
  if (a == "Fizz") {
    int x;
    if (isInt(b)) x = stoi(b) - 1;
    if (isInt(c)) x = stoi(c) - 2;
    if ((x + 3) % 15 == 0)
      cout << "FizzBuzz";
    else
      cout << "Fizz";
  } else {
    if (isInt(a)) {
      int x = stoi(a) + 3;
      if (x % 5 == 0)
        cout << "Buzz";
      else
        cout << x;
    } else {
      if (a == "FizzBuzz")
        cout << "Fizz";
      else {  // a Buzz
        if (isInt(b))
          cout << stoi(b) + 2;
        else if (isInt(c))
          cout << stoi(c) + 1;
      }
    }
  }
}

bool isInt(string s) {
  return !(s == "Fizz" || s == "Buzz" || s == "FizzBuzz");
}