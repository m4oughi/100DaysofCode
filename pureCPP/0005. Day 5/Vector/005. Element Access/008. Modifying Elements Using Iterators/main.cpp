#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {5, 10, 15, 20, 25};

    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        *it *= 2;  // Double each element
    }

    std::cout << "Modified elements:" << std::endl;
    for (int number : numbers) {
        std::cout << number << " ";
    }

    return 0;
}
