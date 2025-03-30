#include <iostream>

int main() {
    int numbers[] = {10, 20, 30, 40, 50};

    for (const auto& num : numbers) { // Ensures read-only access
        std::cout << num << " ";
    }

    return 0;
}
