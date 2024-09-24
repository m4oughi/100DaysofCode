#include <iostream>

template <typename T, size_t N>

int main() {
    
    size_t arraySize(T(&)[N]) {
        return N;
    }

    int main() {
        int numbers[7] = {1, 2, 3, 4, 5, 6, 7};

        std::cout << "Array size: " << arraySize(numbers) << std::endl; // Outputs: Array size: 7
    }
}