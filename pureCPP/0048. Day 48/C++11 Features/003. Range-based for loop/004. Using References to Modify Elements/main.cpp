#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    for (int& num : numbers) { // Using reference to modify elements
        num *= 2;
    }

    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
