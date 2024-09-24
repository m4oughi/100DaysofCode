#include <iostream>

template <typename T, size_t N>
void printTemplateArray(T (&arr)[N]) {  // Template function with reference to array
    for (size_t i = 0; i < N; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    printTemplateArray(arr);  // Array size is preserved
    // Outputs: 10 20 30 40 50
}
