#include <iostream>

int& getArrayElement(int index, int arr[]) {
    return arr[index];  // Return reference to the specified array element
}

int main() {
    int arr[] = {1, 2, 3};
    int &ref = getArrayElement(1, arr);  // ref refers to arr[1]
    ref = 100;  // Modify arr[1]
    std::cout << arr[1] << std::endl;  // Output: 100

    return 0;
}