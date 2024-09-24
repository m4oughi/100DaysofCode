#include <iostream>

// Inline function that may obscure stack trace visibility
inline void inlineFunction() {
    std::cout << "Inside inline function." << std::endl;
}

void callInlineFunction() {
    inlineFunction(); // Breakpoint here may not clearly show inlined function in stack trace
}

int main() {
    callInlineFunction();
    return 0;
}
