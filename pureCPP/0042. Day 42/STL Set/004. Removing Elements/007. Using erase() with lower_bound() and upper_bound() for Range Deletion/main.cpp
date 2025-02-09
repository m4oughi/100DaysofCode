#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {5, 10, 15, 20, 25, 30, 35};

    numbers.erase(numbers.lower_bound(10), numbers.upper_bound(25)); // Removes 10, 15, 20, 25

    std::cout << "Set after range erase: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
