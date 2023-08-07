#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<int, int> sockCount;

    for (int i = 0; i < 5; ++i) {
        int num;
        std::cin >> num;
        sockCount[num]++;
    }


    for (const auto& pair : sockCount) {
        if (pair.second % 2 == 1) {
            std::cout << pair.first << std::endl;
            break;
        }
    }

    return 0;
}