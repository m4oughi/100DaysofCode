#include <iostream>
#include <algorithm>

int main() {
    int arr[6];

    std::fill(arr, arr + 6, 10);

    std::cout << "Filled array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
