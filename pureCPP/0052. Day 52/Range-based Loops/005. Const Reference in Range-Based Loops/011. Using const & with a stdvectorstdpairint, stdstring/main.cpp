#include <iostream>
#include <vector>

int main() {
    std::vector<std::pair<int, std::string>> data = {{1, "One"}, {2, "Two"}, {3, "Three"}};

    for (const auto& pair : data) {
        std::cout << pair.first << " -> " << pair.second << std::endl;
    }

    return 0;
}
