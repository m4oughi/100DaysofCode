#include <iostream>

constexpr int arr[2][2] = {{1, 2}, {3, 4}};

int main() {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            std::cout << arr[i][j] << " "; // Prints 1 2 3 4
        }
        std::cout << std::endl;
    }
}
