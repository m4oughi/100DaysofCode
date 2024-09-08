#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> words = {"Hello", "World", "C++", "Vector"};

    std::cout << "Words in the vector:" << std::endl;
    for (const std::string& word : words) {
        std::cout << word << " ";
    }

    return 0;
}
