#include <iostream>
#include <iterator>
#include <string>

int main() {
    std::cout << "Enter words (end with EOF or Ctrl+D): ";
    std::istream_iterator<std::string> inputIt(std::cin), end;

    std::cout << "You entered:\n";
    while (inputIt != end) {
        std::cout << *inputIt++ << "\n";
    }

    return 0;
}
