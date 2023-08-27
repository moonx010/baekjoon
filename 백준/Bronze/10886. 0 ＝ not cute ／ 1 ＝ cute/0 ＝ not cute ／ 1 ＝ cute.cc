#include <iostream>

using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt += x;
    }
    if(2 * cnt > n) cout << "Junhee is cute!";
    else cout << "Junhee is not cute!";
        
    return 0;
}