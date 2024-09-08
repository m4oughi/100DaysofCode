#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {5, 10, 15, 20, 25};

    auto it = numbers.begin();

    std::cout << "First element: " << *it << std::endl;
    std::cout << "Third element: " << *(it + 2) << std::endl;

    // Modify the third element using iterator arithmetic
    *(it + 2) = 35;

    // Display the modified elements
    for (int number : numbers) {
        std::cout << number << " ";
    }

    return 0;
}
