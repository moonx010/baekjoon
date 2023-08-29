#include<iostream>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    char c;
    int a, b;
    for (int i = 0; i < tc; i++) {
        cin >> a >> c >> b;
        cout << a + b << endl;
    }

    return 0;
}