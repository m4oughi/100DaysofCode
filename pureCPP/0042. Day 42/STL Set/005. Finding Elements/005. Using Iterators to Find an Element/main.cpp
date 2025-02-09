#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {5, 10, 15, 20};

    auto it = numbers.find(15);
    if (it != numbers.end()) {
        std::cout << "Element found: " << *it << std::endl;
    } else {
        std::cout << "Element not found.\n";
    }
    return 0;
}
