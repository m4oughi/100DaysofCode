#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> words = {"apple", "banana", "cherry", "date", "fig"};
    std::string target = "cherry";

    if (std::binary_search(words.begin(), words.end(), target)) {
        std::cout << target << " exists in the list of words.\n";
    } else {
        std::cout << target << " does not exist in the list of words.\n";
    }

    return 0;
}
