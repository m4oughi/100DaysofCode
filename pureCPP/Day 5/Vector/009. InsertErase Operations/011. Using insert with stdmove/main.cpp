#include <iostream>
#include <vector>
#include <string>
#include <utility>

int main() {
    std::vector<std::string> words = {"Hello", "World"};
    std::string word = "C++";

    words.insert(words.begin() + 1, std::move(word));  // Move word to the vector

    std::cout << "Elements after move insert:" << std::endl;
    for (const auto& w : words) {
        std::cout << w << " ";
    }

    std::cout << "\nOriginal string after move: " << (word.empty() ? "empty" : word) << std::endl;

    return 0;
}
