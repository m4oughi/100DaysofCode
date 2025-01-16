#include <iostream>
#include <array>

int main() {
    std::array<std::string, 3> words = {"STL", "C++", "array"};

    for (auto& word : words) {
        word += "!";
        std::cout << word << " ";
    }
    return 0;
}
