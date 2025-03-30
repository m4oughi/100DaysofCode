#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> words = {"C++", "is", "awesome"};

    for (auto word : words) { // `auto` deduces `std::string`
        std::cout << word << " ";
    }

    return 0;
}
