#include <iostream>

int& getElement(int arr[], int index) {
    return arr[index];  // Return reference to array element
}

int main() {
    int arr[3] = {1, 2, 3};
    int& elem = getElement(arr, 1);
    elem = 10;  // Modify array element through reference
    std::cout << "arr[1]: " << arr[1] << std::endl;  // Output: arr[1]: 10
    return 0;
}
