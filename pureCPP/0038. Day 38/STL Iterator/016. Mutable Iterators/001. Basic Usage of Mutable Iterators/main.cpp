#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        *it *= 2; // Modify the element
    }

    std::cout << "Modified container: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
