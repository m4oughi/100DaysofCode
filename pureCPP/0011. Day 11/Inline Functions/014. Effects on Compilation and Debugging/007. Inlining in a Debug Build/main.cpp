#include <iostream>

// Inline function for demonstration in debug and release builds
inline void debugFunction() {
    std::cout << "Debugging Inline Function." << std::endl;
}

int main() {
    debugFunction(); // In debug build, the function may not be inlined
    return 0;
}
