#include <iostream>

int main() {
    int arr[] = {1, 2, 3};
    int &refElement = arr[1];  // Mutable reference to the second element
    refElement = 10;  // Modifies arr[1]
    std::cout << arr[1] << std::endl;  // Output: 10

    return 0;
}