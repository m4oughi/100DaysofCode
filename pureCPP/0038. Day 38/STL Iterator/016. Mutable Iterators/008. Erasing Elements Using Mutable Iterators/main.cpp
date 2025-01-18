#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 2, 5};

    for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ) {
        if (*it == 2) {
            it = numbers.erase(it); // Remove element and update iterator
        } else {
            ++it;
        }
    }

    std::cout << "Vector after removal: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
