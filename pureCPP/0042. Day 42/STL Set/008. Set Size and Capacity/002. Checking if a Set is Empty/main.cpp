#include <iostream>
#include <set>

int main() {
    std::set<int> numbers;

    if (numbers.empty()) {
        std::cout << "The set is empty." << std::endl;
    } else {
        std::cout << "The set is not empty." << std::endl;
    }

    return 0;
}
