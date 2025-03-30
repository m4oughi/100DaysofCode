#include <iostream>

int main() {
    int numbers[] = {1, 2, 3, 4, 5};

    for (int num : numbers) { // Iterating using a range-based loop
        std::cout << num << " ";
    }

    return 0;
}
