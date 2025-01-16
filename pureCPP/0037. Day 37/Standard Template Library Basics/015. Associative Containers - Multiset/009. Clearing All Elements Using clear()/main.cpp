#include <iostream>
#include <set>

int main() {
    std::multiset<int> numbers = {1, 2, 2, 3};

    numbers.clear();  // Remove all elements

    if (numbers.empty()) {
        std::cout << "Multiset is empty.\n";
    }
    return 0;
}
