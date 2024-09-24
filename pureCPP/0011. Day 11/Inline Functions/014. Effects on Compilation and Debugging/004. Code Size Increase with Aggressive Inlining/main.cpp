#include <iostream>

// Inline function for string concatenation
inline std::string concatenate(const std::string &a, const std::string &b) {
    return a + b;
}

int main() {
    std::cout << concatenate("Hello", " World!") << std::endl;
    std::cout << concatenate("Inline", " Functions") << std::endl;
    std::cout << concatenate("Code", " Bloat") << std::endl;
    std::cout << concatenate("Compilation", " Effects") << std::endl;
    return 0;
}
