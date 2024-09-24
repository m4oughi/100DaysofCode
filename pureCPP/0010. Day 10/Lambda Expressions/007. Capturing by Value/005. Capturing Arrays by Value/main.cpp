#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4};
    auto printArray = [arr]() {
        for (int i : arr) {
            std::cout << i << " "; // Undefined behavior; array decay in capture
        }
    };

    arr[0] = 10; // Modify the array outside
    printArray(); // Outputs: Undefined behavior
    return 0;
}
