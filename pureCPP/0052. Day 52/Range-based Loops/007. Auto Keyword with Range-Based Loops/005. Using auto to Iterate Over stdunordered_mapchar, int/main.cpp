#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<char, int> freq = {{'a', 1}, {'b', 2}, {'c', 3}};

    for (auto& pair : freq) { // 'auto' deduces std::pair<char, int>
        pair.second *= 2; // Modify values
    }

    for (const auto& pair : freq) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
