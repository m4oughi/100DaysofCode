#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> scores = {{"Alice", 90}, {"Bob", 85}, {"Charlie", 92}};

    for (const auto& pair : scores) { // Using `const auto&` for efficiency
        std::cout << pair.first << " has score " << pair.second << std::endl;
    }

    return 0;
}
