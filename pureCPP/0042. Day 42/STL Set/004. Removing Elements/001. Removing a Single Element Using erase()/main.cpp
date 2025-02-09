#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {10, 20, 30, 40};

    numbers.erase(20); // Removes 20 from the set

    std::cout << "Set after removing 20: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
