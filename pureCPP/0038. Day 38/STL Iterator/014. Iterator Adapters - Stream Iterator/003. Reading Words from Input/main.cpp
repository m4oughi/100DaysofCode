#include <iostream>
#include <vector>
#include <iterator>

int main() {
    std::cout << "Enter words (end input with Ctrl+D or EOF): ";
    std::vector<std::string> words(std::istream_iterator<std::string>(std::cin), std::istream_iterator<std::string>());

    std::cout << "You entered: ";
    for (const auto& word : words) {
        std::cout << word << " ";
    }

    return 0;
}
