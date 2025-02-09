#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {5, 15, 25, 35};

    int key = 50;
    if (numbers.find(key) != numbers.end()) {
        std::cout << key << " found.\n";
    } else {
        std::cout << key << " not found.\n";
    }
    return 0;
}
