#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {10, 20, 30, 40, 50};

    int key = 30;
    if (numbers.find(key) != numbers.end()) {
        std::cout << key << " found in the set.\n";
    } else {
        std::cout << key << " not found in the set.\n";
    }
    return 0;
}
