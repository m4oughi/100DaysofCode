#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ) {
        if (*it == 30) {
            it = numbers.erase(it); // Erases and invalidates current iterator
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
