#include <iostream>

void func1() {
    std::cout << "Function 1" << std::endl;
}

void func2() {
    std::cout << "Function 2" << std::endl;
}

void func3() {
    std::cout << "Function 3" << std::endl;
}

int main() {
    void (*funcPtrArray[3])() = {func1, func2, func3};  // Array of pointers to functions

    // Call each function using the array of pointers
    for (int i = 0; i < 3; ++i) {
        funcPtrArray[i]();  // Outputs: Function 1, Function 2, Function 3
    }
}
