#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> words = {"C++", "STL", "Auto", "Lambda"};

    for (auto word : words) { // Automatically deduces std::string
        std::cout << word << " ";
    }

    return 0;
}
