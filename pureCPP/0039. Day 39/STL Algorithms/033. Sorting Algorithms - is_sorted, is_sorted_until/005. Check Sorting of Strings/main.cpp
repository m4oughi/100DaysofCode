#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> words = {"apple", "banana", "cherry", "date"};

    if (std::is_sorted(words.begin(), words.end())) {
        std::cout << "The list of words is sorted alphabetically.\n";
    } else {
        std::cout << "The list of words is not sorted alphabetically.\n";
    }
    return 0;
}
