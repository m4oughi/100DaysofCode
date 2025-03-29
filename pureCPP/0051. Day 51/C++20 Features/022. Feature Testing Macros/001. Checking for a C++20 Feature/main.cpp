#include <iostream>

int main() {
#ifdef __cpp_concepts
    std::cout << "Concepts are supported!\n";
#else
    std::cout << "Concepts are NOT supported!\n";
#endif
    return 0;
}
