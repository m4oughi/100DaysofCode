#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> data = {"apple", "cherry", "grape", "banana", "kiwi", "mango"};

    // The first half ["apple", "cherry", "grape"] and the second half ["banana", "kiwi", "mango"] are sorted.
    std::inplace_merge(data.begin(), data.begin() + 3, data.end());

    std::cout << "Merged strings: ";
    for (const auto& str : data) {
        std::cout << str << " ";
    }

    return 0;
}
