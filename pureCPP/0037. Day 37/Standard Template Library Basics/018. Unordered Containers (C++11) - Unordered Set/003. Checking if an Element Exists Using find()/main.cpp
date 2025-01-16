#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> numbers = {1, 2, 3, 4, 5};

    int to_find = 3;
    if (numbers.find(to_find) != numbers.end()) {
        std::cout << to_find << " is in the set.\n";
    } else {
        std::cout << to_find << " is not in the set.\n";
    }
    return 0;
}
