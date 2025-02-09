#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {10, 20, 30, 40};

    int key = 20;
    if (numbers.find(key) != numbers.end()) {
        std::cout << key << " exists in the set.\n";
    } else {
        std::cout << key << " does not exist in the set.\n";
    }
    return 0;
}
