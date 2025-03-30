#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> words = {"Hello", "C++", "World"};

    for (const auto& word : words) { // Prevents unnecessary copying
        std::cout << word << " ";
    }

    return 0;
}
