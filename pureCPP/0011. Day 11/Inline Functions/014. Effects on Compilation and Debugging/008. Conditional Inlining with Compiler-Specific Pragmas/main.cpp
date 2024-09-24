#include <iostream>

#pragma GCC push_options
#pragma GCC optimize("O0") // Disable optimizations for this function

inline void noInlineFunction() {
    std::cout << "This function is not inlined due to pragmas." << std::endl;
}

#pragma GCC pop_options

int main() {
    noInlineFunction(); // Output: This function is not inlined due to pragmas.
    return 0;
}
