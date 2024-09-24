#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    // Using iterator to traverse the vector
    for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        *it += 5;  // Modify each element
    }

    // Display the modified elements
    for (int number : numbers) {
        std::cout << number << " ";
    }

    return 0;
}
