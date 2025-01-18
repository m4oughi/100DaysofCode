#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40};

    for (auto it = numbers.begin(); it != numbers.end(); ) {
        if (*it == 20) {
            it = numbers.erase(it); // Erase and continue safely
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
