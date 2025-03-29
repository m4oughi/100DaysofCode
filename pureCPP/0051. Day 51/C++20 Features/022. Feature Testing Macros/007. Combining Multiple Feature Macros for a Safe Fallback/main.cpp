#include <iostream>

int main() {
#if defined(__cpp_lib_ranges) && defined(__cpp_concepts)
    std::cout << "Ranges and Concepts are both available!\n";
#elif defined(__cpp_concepts)
    std::cout << "Only Concepts are available!\n";
#elif defined(__cpp_lib_ranges)
    std::cout << "Only Ranges are available!\n";
#else
    std::cout << "Neither Ranges nor Concepts are available.\n";
#endif
    return 0;
}
