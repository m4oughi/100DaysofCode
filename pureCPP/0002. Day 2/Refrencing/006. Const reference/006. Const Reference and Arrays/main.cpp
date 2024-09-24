#include <iostream>

int main() {
    int arr[] = {1, 2, 3};
    const int &ref = arr[0];  // Const reference to the first element
    std::cout << ref << std::endl;  // Output: 1
    // ref = 10;  // Error: Cannot modify the array element through ref

    return 0;
}