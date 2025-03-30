#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<std::string> words = {"Apple", "Banana", "Cherry"};

    for (const std::string& word : words) { // Prevents modifications
        std::cout << word << " ";
    }

    return 0;
}
