#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {10, 20, 30};

    auto it = numbers.find(20);
    if (it != numbers.end()) {
        std::cout << "20 found in the set.\n";
    } else {
        std::cout << "20 not found.\n";
    }
    return 0;
}
