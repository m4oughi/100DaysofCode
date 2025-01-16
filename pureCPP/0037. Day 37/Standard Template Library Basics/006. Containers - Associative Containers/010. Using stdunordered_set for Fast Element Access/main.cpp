#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> numbers = {1, 2, 3, 4, 5};
    int search = 3;

    if (numbers.find(search) != numbers.end()) {
        std::cout << search << " found in the set.\n";
    } else {
        std::cout << search << " not found.\n";
    }
    return 0;
}
