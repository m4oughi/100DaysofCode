#include <iostream>

constexpr bool has_concepts() {
#ifdef __cpp_concepts
    return true;
#else
    return false;
#endif
}

int main() {
    if constexpr (has_concepts()) {
        std::cout << "Concepts are enabled!\n";
    } else {
        std::cout << "Concepts are not supported.\n";
    }
    return 0;
}
