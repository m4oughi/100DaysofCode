#include <iostream>

int main() {
    int numbers[] = {10, 20, 30, 40, 50};

    for (const int num : numbers) {
        // num = num * 2; // Error: num is read-only
        std::cout << num << " ";
    }

    return 0;
}
