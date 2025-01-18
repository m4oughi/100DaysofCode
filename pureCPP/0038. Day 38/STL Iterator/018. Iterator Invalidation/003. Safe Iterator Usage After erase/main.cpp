#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    for (auto it = numbers.begin(); it != numbers.end(); ) {
        if (*it == 30) {
            it = numbers.erase(it); // Safe: update iterator to the return value of `erase`
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
