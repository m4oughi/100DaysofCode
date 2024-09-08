#include <iostream>

const int* getArray() {
    static const int arr[3] = {120, 130, 140}; // Static to ensure it exists after function returns
    return arr; // Returning a pointer to a constant array
}

int main() {
    const int* arrPtr = getArray();
    // arrPtr[0] = 150; // NOT allowed: modifying the array elements through arrPtr is not allowed

    return 0;
}