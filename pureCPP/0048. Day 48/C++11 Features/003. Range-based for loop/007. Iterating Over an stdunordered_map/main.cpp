#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> scores = {{"Alice", 95}, {"Bob", 88}};

    for (const auto& entry : scores) {
        std::cout << entry.first << " scored " << entry.second << std::endl;
    }

    return 0;
}
