#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {10, 20, 30, 40, 50};

    numbers.erase(numbers.begin(), numbers.find(40)); // Removes 10, 20, 30

    std::cout << "Set after removing elements up to 40: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
