#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {10, 20, 30, 40};

    numbers.clear(); // Removes all elements

    std::cout << "Set size after clear: " << numbers.size();
    return 0;
}
