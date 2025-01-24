#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> words = {"apple", "banana", "cherry", "date", "fig"};
    std::string target = "cherry";

    auto range = std::equal_range(words.begin(), words.end(), target);

    std::cout << "Range of '" << target << "': ["
              << (range.first - words.begin()) << ", "
              << (range.second - words.begin()) << ")\n";

    return 0;
}
