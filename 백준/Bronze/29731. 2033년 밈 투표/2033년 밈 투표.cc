#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    vector<string> rick_astley_promises;
    rick_astley_promises.push_back("Never gonna give you up");
    rick_astley_promises.push_back("Never gonna let you down");
    rick_astley_promises.push_back("Never gonna run around and desert you");
    rick_astley_promises.push_back("Never gonna make you cry");
    rick_astley_promises.push_back("Never gonna say goodbye");
    rick_astley_promises.push_back("Never gonna tell a lie and hurt you");
    rick_astley_promises.push_back("Never gonna stop");

    int N;
    cin >> N;
    cin.ignore(); // 개행 문자 무시

    bool changed = false;

    for (int i = 0; i < N; ++i) {
        string S;
        getline(cin, S);

        if (find(rick_astley_promises.begin(), rick_astley_promises.end(), S) == rick_astley_promises.end()) {
            changed = true;
            break;
        }
    }

    if (changed) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}