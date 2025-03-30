#include <iostream>

int main() {
    int numbers[] = {1, 2, 3, 4, 5};

    for (auto& num : numbers) { // Using reference to modify array elements
        num *= 2;
    }

    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
