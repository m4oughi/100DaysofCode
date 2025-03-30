#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> words = {"Hello", "World", "C++"};

    for (const std::string& word : words) { // Using `const &` to avoid copying
        std::cout << word << " ";
    }

    return 0;
}
