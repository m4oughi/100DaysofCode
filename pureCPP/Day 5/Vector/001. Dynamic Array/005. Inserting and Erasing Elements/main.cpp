#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Insert element at the beginning
    numbers.insert(numbers.begin(), 0);

    // Insert element at the end
    numbers.push_back(6);

    // Insert element at a specific position
    numbers.insert(numbers.begin() + 3, 99);

    // Erase the first element
    numbers.erase(numbers.begin());

    // Erase a specific element
    numbers.erase(numbers.begin() + 2);

    // Display the elements
    for (int number : numbers) {
        std::cout << number << " ";
    }

    return 0;
}
