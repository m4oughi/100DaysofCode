#include <iostream>

// A simple function that takes two integers and returns their sum
int add(int a, int b) {
    return a + b;
}

int main() {
    // Declare a function pointer that points to a function taking two ints and returning an int
    int (*funcPtr)(int, int) = add;  // Initialize function pointer with 'add'

    // Call the function using the function pointer
    int result = funcPtr(5, 10);
    std::cout << "Result: " << result << std::endl;  // Output: Result: 15

    return 0;
}
