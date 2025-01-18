#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 2, 4};

    for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        if (*it == 2) {
            *it = 99; // Replace 2 with 99
        }
    }

    std::cout << "Modified vector: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
