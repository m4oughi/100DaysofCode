#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {5, 10, 15, 20};

    while (!numbers.empty()) {
        std::cout << "Removing: " << *numbers.begin() << std::endl;
        numbers.erase(numbers.begin());  // Remove the first element
    }

    std::cout << "The set is now empty!" << std::endl;

    return 0;
}
