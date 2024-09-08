#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 5};

    // Insert 3 and 4 at index 2
    numbers.insert(numbers.begin() + 2, {3, 4});

    std::cout << "Elements in the vector after inserting multiple elements:" << std::endl;
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
