#include <iostream>

template <typename T>
void printValues(T value) {
    std::cout << value << std::endl;
}

template <typename T, typename... Args>
void printValues(T first, Args... args) {
    std::cout << first << std::endl;
    printValues(args...);  // Recursive call
}

int main() {
    printValues(1, 2.5, "Hello", 'A');
    
    return 0;
}
