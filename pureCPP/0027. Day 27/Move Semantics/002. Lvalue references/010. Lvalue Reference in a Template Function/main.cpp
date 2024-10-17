#include <iostream>

template<typename T>
void printValue(T &value) {  // Lvalue reference template parameter
    std::cout << "Lvalue reference: " << value << std::endl;
}

int main() {
    int x = 42;
    printValue(x);  // Calls the function with Lvalue reference

    return 0;
}

