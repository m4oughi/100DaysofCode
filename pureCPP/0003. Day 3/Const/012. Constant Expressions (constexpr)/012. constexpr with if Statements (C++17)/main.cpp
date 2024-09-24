#include <iostream>

constexpr int conditionalAdd(bool flag, int a, int b) {
    if (flag) {
        return a + b;
    } else {
        return a - b;
    }
}


int main() {
    constexpr int resultTrue = conditionalAdd(true, 10, 5); // Compile-time evaluation
    constexpr int resultFalse = conditionalAdd(false, 10, 5); // Compile-time evaluation
    std::cout << resultTrue << " " << resultFalse << std::endl; // Prints 15 5
}