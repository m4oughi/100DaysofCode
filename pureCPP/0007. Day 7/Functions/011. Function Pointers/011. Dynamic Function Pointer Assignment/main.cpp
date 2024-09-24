#include <iostream>

// Function prototypes
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }

int main() {
    int (*funcPtr)(int, int);

    // Assign function pointers dynamically
    funcPtr = add;
    std::cout << "Add: " << funcPtr(10, 5) << std::endl;

    funcPtr = subtract;
    std::cout << "Subtract: " << funcPtr(10, 5) << std::endl;

    return 0;
}
