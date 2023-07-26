#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    getline(cin, word); // Read the word to search

    string line;
    int occurrences = 0;

    while (getline(cin, line)) {
        size_t pos = 0;
        while ((pos = line.find(word, pos)) != string::npos) {
            occurrences++;
            pos += word.length(); // Move to the next position to continue searching
        }
    }

    cout << occurrences << endl;
    return 0;
}