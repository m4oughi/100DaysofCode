#include <iostream>

void multiplyElement(int &element, int factor) {
    element *= factor;
}

int main() {
    int arr[] = {1, 2, 3};
    multiplyElement(arr[1], 10);  // Multiply arr[1] by 10
    std::cout << arr[1] << std::endl;  // Output: 20

    return 0;
}