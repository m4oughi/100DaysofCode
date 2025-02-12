#include <iostream>
#include <map>

int main() {
    std::map<char, int> frequency = {
        {'d', 4},
        {'a', 1},
        {'c', 3},
        {'b', 2}
    };

    std::cout << "Characters stored in order:\n";
    for (const auto& entry : frequency) {
        std::cout << entry.first << " -> " << entry.second << "\n";
    }

    return 0;
}
