#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {3, 6, 9, 12, 15};

    int& ref = numbers[2];  // Get a reference to the third element
    ref = 99;  // Modify the third element

    std::cout << "Modified vector elements:" << std::endl;
    for (int number : numbers) {
        std::cout << number << " ";
    }

    return 0;
}
