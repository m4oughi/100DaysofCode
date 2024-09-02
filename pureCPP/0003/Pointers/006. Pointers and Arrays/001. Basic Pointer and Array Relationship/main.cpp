#include <iostream>

int main() {
    int arr[3] = {1, 2, 3};
    int* ptr = arr;  // 'ptr' now points to the first element of 'arr'

    std::cout << "First element: " << *ptr << std::endl;  // Output: First element: 1

    return 0;
}
