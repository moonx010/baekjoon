#include <iostream>
using namespace std;

int main()
{
  while (true)
  {
    if (cin.eof())
      break;
    string s;
    getline(cin, s);
    if (s == "CU")
      cout << "see you";
    else if (s == ":-)")
      cout << "I’m happy";
    else if (s == ":-(")
      cout << "I’m unhappy";
    else if (s == ";-)")
      cout << "wink";
    else if (s == ":-P")
      cout << "stick out my tongue";
    else if (s == "(~.~)")
      cout << "sleepy";
    else if (s == "TA")
      cout << "totally awesome";
    else if (s == "CCC")
      cout << "Canadian Computing Competition";
    else if (s == "CUZ")
      cout << "because";
    else if (s == "TY")
      cout << "thank-you";
    else if (s == "YW")
      cout << "you’re welcome";
    else if (s == "TTYL")
      cout << "talk to you later";
    else
      cout << s;
    cout << "\n";
  }
}