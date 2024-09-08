#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;  // Create an empty vector of integers

    // Add elements to the vector
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    // Display the elements
    for (int number : numbers) {
        std::cout << number << " ";
    }

    return 0;
}
