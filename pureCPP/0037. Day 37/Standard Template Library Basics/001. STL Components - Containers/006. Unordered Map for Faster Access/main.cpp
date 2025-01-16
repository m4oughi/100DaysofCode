#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> scores = {{"Alice", 95}, {"Bob", 85}, {"Charlie", 90}};

    for (const auto& [name, score] : scores) {
        std::cout << name << ": " << score << std::endl;
    }
    return 0;
}
