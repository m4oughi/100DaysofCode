#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {10, 20, 30};

    if (numbers.empty()) {
        std::cout << "The set is empty." << std::endl;
    } else {
        std::cout << "The set is not empty. Size: " << numbers.size() << std::endl;
    }

    return 0;
}
