#include <iostream>

int main() {
    int a = 10, b = 20, c = 30;
    int* ptrArray[3];  // Array of pointers to integers

    ptrArray[0] = &a;
    ptrArray[1] = &b;
    ptrArray[2] = &c;

    // Print values using the array of pointers
    for (int i = 0; i < 3; ++i) {
        std::cout << *ptrArray[i] << " ";  // Outputs: 10 20 30
    }
    std::cout << std::endl;
}
