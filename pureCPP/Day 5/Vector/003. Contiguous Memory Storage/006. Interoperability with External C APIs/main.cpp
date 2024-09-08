#include <iostream>
#include <vector>
#include <algorithm>  // For std::sort

// C-style function that expects a raw pointer and size
void sortArray(int* arr, size_t size) {
    std::sort(arr, arr + size);
}

int main() {
    std::vector<int> numbers = {50, 10, 40, 20, 30};

    // Pass vector data directly to a C-style function
    sortArray(numbers.data(), numbers.size());

    // Display the sorted elements
    for (int number : numbers) {
        std::cout << number << " ";
    }

    return 0;
}
