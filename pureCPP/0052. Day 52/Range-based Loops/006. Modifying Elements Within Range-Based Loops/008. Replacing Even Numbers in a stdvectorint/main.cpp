#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 15, 20, 25, 30};

    for (int& num : numbers) {
        if (num % 2 == 0) {
            num = -1; // Replace even numbers with -1
        }
    }

    for (const int& num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
