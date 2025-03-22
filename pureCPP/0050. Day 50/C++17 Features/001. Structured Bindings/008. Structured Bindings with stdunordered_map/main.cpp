#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> scores = {{"Alice", 90}, {"Bob", 85}};

    for (const auto& [name, score] : scores) {
        std::cout << name << " scored " << score << " points.\n";
    }
    return 0;
}
