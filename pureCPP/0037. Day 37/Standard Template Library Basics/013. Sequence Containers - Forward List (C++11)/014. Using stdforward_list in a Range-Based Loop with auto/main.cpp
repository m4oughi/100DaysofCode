#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<std::string> words = {"C++", "STL", "forward_list"};

    for (auto& word : words) {
        word += "!";
        std::cout << word << " ";
    }
    return 0;
}
