#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> words = {"apple", "banana", "cherry", "date"};

    std::cout << "Minimum element: " << *std::min_element(words.begin(), words.end()) << "\n";
    std::cout << "Maximum element: " << *std::max_element(words.begin(), words.end()) << "\n";

    return 0;
}
