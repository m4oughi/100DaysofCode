#include <iostream>

// Macro to define a variable inside a block
#define DEFINE_VARIABLE_MACRO(x) { int x = 5; std::cout << "Inside Macro: " << x << std::endl; }

// Inline function to define a variable inside a block
inline void defineVariableInline(int& x) {
    int local_x = 5;
    std::cout << "Inside Inline: " << local_x << std::endl;
}

int main() {
    int x = 10;
    DEFINE_VARIABLE_MACRO(x); // Local scope is overwritten
    std::cout << "After Macro: " << x << std::endl; // Output: 10

    defineVariableInline(x); // Inline function has its own scope
    std::cout << "After Inline: " << x << std::endl; // Output: 10
    return 0;
}
