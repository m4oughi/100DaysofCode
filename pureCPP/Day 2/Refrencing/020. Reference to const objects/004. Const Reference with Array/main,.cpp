#include <iostream>

void printArray(const int (&arr)[3]) {  // Const reference to array
    for (int i : arr) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[3] = {1, 2, 3};
    printArray(arr);  // Passing array

    return 0;
}
