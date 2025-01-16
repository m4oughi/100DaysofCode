#include <iostream>
#include <deque>

int main() {
    std::deque<std::string> words = {"hello", "world", "deque"};

    for (auto& word : words) {
        word += "!"; // Modify each element
        std::cout << word << " ";
    }
    return 0;
}
