#include <iostream>

int main() {
    int arr[3] = {200, 210, 220};
    int *const arrayPtr = arr; // arrayPtr is a top-level const, cannot point to another array

    arrayPtr[0] = 230; // Allowed: modifying the elements of the array is allowed
    // arrayPtr = nullptr; // NOT allowed: changing the array pointer itself is not allowed


    return 0;
}