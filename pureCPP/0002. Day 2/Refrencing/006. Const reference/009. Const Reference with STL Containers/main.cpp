#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    for (const int &num : numbers) {
        std::cout << num << " ";  // Prints each element, but cannot modify it
    }

    return 0;
}