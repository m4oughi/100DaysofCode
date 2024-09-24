#include <iostream>

// Function to be called
int square(int x) {
    return x * x;
}

// Function accepting a function pointer
void printResult(int (*funcPtr)(int), int value) {
    std::cout << "Result: " << funcPtr(value) << std::endl;
}

int main() {
    printResult(square, 5);  // Pass function pointer to another function
    return 0;
}
