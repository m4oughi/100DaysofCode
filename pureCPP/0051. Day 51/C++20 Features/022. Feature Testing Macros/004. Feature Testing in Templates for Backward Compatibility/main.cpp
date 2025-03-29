#include <iostream>

template <typename T>
void print_type_info() {
#if defined(__cpp_concepts)
    std::cout << "Concepts are supported. Using modern constraints.\n";
#else
    std::cout << "Concepts are NOT supported. Falling back to SFINAE.\n";
#endif
}

int main() {
    print_type_info<int>();
    return 0;
}
