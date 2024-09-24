#include <iostream>

int main()
{
    int arr[3] = {10, 20, 30};
    const int *ptrToConst = arr; // Pointer to a constant integer

    // Accessing array elements using a pointer to a constant
    for (int i = 0; i < 3; ++i)
    {
        std::cout << ptrToConst[i] << " "; // Output: 10 20 30
    };

    // ptrToConst[1] = 40;  // Error: Cannot modify the value through 'ptrToConst'

    int *const constPtr = arr; // Constant pointer to an integer
    constPtr[1] = 40;          // Allowed: Can modify the value at the address
    // constPtr = nullptr;  // Error: 'constPtr' is a constant pointer and cannot point to a different address
}