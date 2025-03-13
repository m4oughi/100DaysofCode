#include <iostream>

int main() {
    int numbers[] = {1'000, 10'000, 100'000, 1'000'000}; // More readable numbers

    for (int num : numbers) {
        std::cout << "Number: " << num << std::endl;
    }

    return 0;
}
