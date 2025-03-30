#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> words = {"Hello", "World", "C++"};

    for (const std::string& word : words) {
        std::cout << word << " ";
    }

    return 0;
}
