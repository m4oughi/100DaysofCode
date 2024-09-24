#include <iostream>
#include <functional>

int main() {
    std::function<int(const int[], int)> arraySum = [&](const int arr[], int n) -> int {
        return n == 0 ? 0 : arr[n - 1] + arraySum(arr, n - 1);
    };

    int numbers[] = {1, 2, 3, 4, 5};
    std::cout << "Sum of array: " << arraySum(numbers, 5) << std::endl; // Outputs: 15

    return 0;
}
