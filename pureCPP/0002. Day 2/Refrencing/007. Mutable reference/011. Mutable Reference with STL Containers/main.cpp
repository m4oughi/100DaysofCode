#include <iostream>

int main() {
    std::vector<int> numbers = {1, 2, 3};

    for (int &num : numbers) {  // Mutable reference to each element
        num *= 2;  // Modify each element
    }

    for (const int &num : numbers) {
        std::cout << num << " ";  // Output: 2 4 6
    }

    return 0;
}