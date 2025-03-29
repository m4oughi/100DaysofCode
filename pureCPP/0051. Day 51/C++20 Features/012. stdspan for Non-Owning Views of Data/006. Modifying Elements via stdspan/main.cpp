#include <iostream>
#include <span>

void modify(std::span<int> data) {
    for (int &value : data) value *= 2;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    modify(arr);  // Modifies the original array

    for (int val : arr) std::cout << val << " ";  // Output: 2 4 6 8 10
    std::cout << "\n";

    return 0;
}
